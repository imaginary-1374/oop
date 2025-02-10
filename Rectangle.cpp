//2. Write a C++ program to create a class called Rectangle that has private member variables
//for length and width.Implement member functions to calculate the rectangle's area and perimeter. 

#include <iostream>
#include "RectangleClass.h"
using namespace std;

int main()
{
	float l;
	float w;
	cout << "Enter the length:\n";
	cin >> l;
	cout << "\n Now enter the width\n";
	cin >> w;
	RectangleClass rec1;

	rec1.setlengths(l, w);
	cout << "\nThe area of the rectangle: " << rec1.getarea() << endl;
	cout << "The perimeter of the rectangle: " << rec1.getperimeter() << endl;
	return 0;
}