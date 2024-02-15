#include <iostream>
using namespace std;

class Room
{
    private:
        double length;
        double breadth;
        double height;

    public:
        void intData(double len, double brth, double hgt)
        {
            length = len;
            breadth = brth;
            height = hgt;
        }

        double calculateArea()
        {
            return length * breadth;
        }
        double calculateVolume()
        {
            return length * breadth * 
        }
}
