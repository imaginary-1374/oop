class round_shapes
{
private:
	float d = 0;
	const float pi = 3.14159;

public:
	void setradius( float x);

	double getarea_disk();		// مساحة قرص
	double getcircumference();  // محيط دائرة

	double getsurface_sphere(); // سطح كرة
	double getvolume_sphere();  // حجم كرة
};
