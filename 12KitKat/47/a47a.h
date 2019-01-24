#ifdef RECHTECK_INCLUDED
#define RECHTECK_INCLUDED

#define MIN_WIDTH 100
#define MIN_LENGTH 100

typedef struct _rechteck {
    double width;
    double length;

    double getWidth(Rechteck *r);
    double getLength(Rechteck *r);

    double getWidth(Rechteck *r, double x);
    double setLength(Rechteck *r, double x);

    double checkWidth(double x);
    double checkLength(double x);

    int new_rechteck(Rechteck r, double width, double length);

} Rechteck;

#endif