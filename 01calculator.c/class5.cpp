#include <iostream>
#include <cmath>
using namespace std;

class RightTriangle
{
	private:
		double base;
		double height;
	
	public:
		RightTriangle(double b, double h)
		{
			base = b;
			height = h;
		}

		double GetThirdSide()
		{
			return (sqrt(base * base + height * height));

		}

};
// A main function to test the class
