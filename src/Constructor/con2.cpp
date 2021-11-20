#include<iostream>
using namespace std;

class pop
{
public:
	double s1;
	double s2;

	pop(double side_1, double side_2)
	{
		s1 = side_1;
		s2 = side_2;

	}

	double areacal()
	{
		return s1 * s2;
	}
};
