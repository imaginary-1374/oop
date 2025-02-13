#pragma once
class Distance_Class
{
private:
	int cm;
	double meter;
public:

	void set(int c, double m);
	int get_cm();
	double get_meter();

	Distance_Class() {}

	Distance_Class add_distance(Distance_Class d2);

	Distance_Class(int c, double m);

};
