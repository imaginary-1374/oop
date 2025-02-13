#include "Distance_Class.h"

void Distance_Class::set(int c, double m)
{
	cm = c;
	meter = m;
}
int Distance_Class::get_cm()
{
	return cm;
}
double Distance_Class::get_meter()
{
	return meter;
}
Distance_Class Distance_Class::add_distance(Distance_Class d2)
{
	Distance_Class result;
	result.meter = meter + d2.meter;
	result.cm = cm + d2.cm;

	return result;
}
Distance_Class::Distance_Class(int c, double m): cm(c),meter(m)
{ }