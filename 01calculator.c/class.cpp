#include <iostream>
using namespace std;

class Room
{
	public:
		double height;
		double length;
		double breadth;

		double calculateArea()
		{
			return length * breadth;
		}

		double calculateVolume()
		{
			return length * breadth * height;
		}

};
int main()
{
	// Create object as Room class
	Room room1;
	// Assign values to the data members
	room1.length = 42.5;
	room1.breadth = 30.5;
	room1.height = 19.2;
	cout << "Area of room1: "<<room1.calculateArea()<< endl;
	cout << "Volume of room1: "<<room1.calculateVolume()<< endl;

	return 0;
}
