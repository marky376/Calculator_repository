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
	Sphere s(5);

	cout << "The volume of the sphere is " << s.getVolume() << " cubic cm." << endl;

	return 0;	
}
