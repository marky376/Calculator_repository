#include <iostream>
using namespace std;

class Spheres
{
	private:
		double radius;
	

	public:
		Sphere(double r)
		{
			radius = r;
		}

		double getVolume()
		{
			return ( 4/3 * 3.14 * radius * radius * radius);
		}

};
int main()
{

}
