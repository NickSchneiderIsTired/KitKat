#ifdef RECHTECK
#define RECHTECK
#define WIDTH_MIN 0
#define LENGTH_MIN 0

typedef struct _rechteck
{
	double width;
	double length;
	double getWidth(rechteck *r);
	double getLength(rechteck *r);
	double setWidth(rechteck *r, double x);
	double setLength(rechteck *r, double x);
	double checkWidth(double x);
	double checkLength(double x);
	int new_rechteck(rechteck r, double width, double length);
}
#endif RECHTECK