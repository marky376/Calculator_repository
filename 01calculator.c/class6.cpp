#include <iostream>
using namespace std;

class Sphere//Main Class
{
	private:
		double radius;
		
	

	public:
		Sphere(double r)
		{
			radius = r;
		}

		double getVolume()// Finding or working out the volume of the given sphere
		{
			return ( 4/3 * 3.14 * radius * radius * radius);
		}

};
// A main function to test the class Sphere
int main()
{
	Sphere s(5);

	cout << "The volume of the sphere is " << s.getVolume() << " cubic cm." << endl;

	return 0;	
}
