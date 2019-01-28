#define BOOK_MAX_NAME 20
#define BOOK_SIZE_ISBN10 10
typedef struct _book {
    char isbn10[BOOK_SIZE_ISBN10 + 1];
    char title[BOOK_MAX_NAME + 1];
} BOOK;

char *book_get_title(const BOOK *book)
{
    return book->title;
}

int book_check_isbn10(const char *isbn10)
{
    int i;
    int value;
    for(i = 0; i < BOOK_SIZE_ISBN10 - 1; i++) {
        int digit = isbn10[i] - '0';
        value += digit;
    }
    if((value % 11 <= 9 && isbn10[0] == isbn10[9]) || (value % 11 == 10 && isbn10[9] == 'X')) {
        return 1;
    } else {
        return 0;
    }
}

int book_set_isbn10(BOOK *book, const char *isbn10)
{
    if(!book_check_isbn10(isbn10)) return 0;
    strcpy(book->isbn10, isbn10);
    return 1;
}

int book_new(BOOK *book, const char *title, const char *isbn10)
{
    if(!book_set_isbn10(book, isbn10)) return 0;
    strcpy(book->title, title);
    return 1;
}