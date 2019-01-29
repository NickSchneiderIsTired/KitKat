#define BOOK_MAX_NAME 20
#define BOOK_SIZE_ISBN10 10

typedef struct _book
{
    char isbn10[BOOK_SIZE_ISBN10 + 1];
    char title[BOOK_MAX_NAME + 1];
} BOOK;

char *book_get_title(const BOOK *book)
{
    return book->title;
}

int book_check_isbn10(const char *isbn10)
{
    int i, z, ziffer;
    for(i = 0; i < BOOK_SIZE_ISBN10; i++) {
        ziffer = isbn10[i];
        z += ziffer;
    }
    if((z % 11 <= 9 && isbn10[0] == z) || (z % 11 == 10 && isbn10[9] == 'X')) {
        return 1;
    }
    return 0;
}

int book_set_isbn10(BOOK *book, const char *isbn10)
{
    if(book_check_isbn10(isbn10) == 1){
        strcpy(book->isbn10, isbn10);
        return 1;
    }
    return 0;
}

int book_new(BOOK *book, const char *title, const char *isbn10)
{
    int title_length = 0;
    while (title[title_length] != '\0'){
        ++title_length;
    }

    if(book_set_isbn10(isbn10) == 1 && title_length < 21){
        strcpy(book->title, title);
        return 1;
    }
    return 0;
}