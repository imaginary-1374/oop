#include "round_shapes.h"
using namespace std;

void round_shapes::setradius(float x)
{
	d = x;
}


double round_shapes::getarea_disk()
{
	double area = (pi * (d * d));
	return area;	// return (π(r^2)); ==> didn't work
}
double round_shapes::getcircumference()
{
	return (2*pi*d);
}


double round_shapes::getsurface_sphere()
{
	return ((4)*(pi*d*d));
}
double round_shapes::getvolume_sphere()
{
	return ((4/3)*(pi*d*d*d));
}
