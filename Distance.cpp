#include <iostream>
#include "Distance_Class.h"
using namespace std;

int main()
{
	Distance_Class obj;
	obj.set(30, 3.2);

	Distance_Class obj1;
	obj1.set(20, 3.80);
	cout << obj1.get_cm() << endl;
	cout << obj1.get_meter() << endl;

	Distance_Class obj2{50, 2.4};
	cout << obj2.get_cm() << endl;
	cout << obj2.get_meter() << endl;

	Distance_Class obj3(obj2);
	cout << obj3.get_cm() << endl;
	cout << obj3.get_meter() << endl;

	Distance_Class obj4 = obj3;
	cout << obj4.get_cm() << endl;
	cout << obj4.get_meter() << endl;

	Distance_Class d3 = obj.add_distance(obj1);
	cout << "cm: " << d3.get_cm() << "\t" << "meter: " << d3.get_meter() << endl;

	
}