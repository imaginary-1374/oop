//1. Write a C++ program to implement a class called Circle that has private member variables
//for radius.Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include "round_shapes.h"
using namespace std;

int main()
{
	float radius;
	round_shapes shape1;

	cout << "Enter the radius of the circle: ";
		cin >> radius;

	shape1.setradius(radius);

	cout << "Area of the circle: " << shape1.getarea_disk() << endl;
	cout << "Circumference: " << shape1.getcircumference() << endl;
	cout << "surface of the shpere: " << shape1.getsurface_sphere() << endl;
	cout << "Volume of the shpere:: " << shape1.getvolume_sphere() << endl;

	return 0;
}