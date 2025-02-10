#include "RectangleClass.h"

void RectangleClass::setlengths(float x, float y)
{
	l = x;
	w = y;
}

float RectangleClass::getarea()
{
	return (l * w);
}
float RectangleClass::getperimeter()
{
	return (l + w) * 2;
}


