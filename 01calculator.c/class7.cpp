#include<iostream>

using namespace std;

class Prim
{
	public:
		double num1;
		double num2;

		double getSum(double a, double b)
		{
			a = num1;
			b = num2;

			return a + b;
		}
		double getAverage(double a, double b)
		{
			a = num1;
			b = num2;

			return ((a + b)/2)
		}

};

int main(void)
{
	Prim prim;
	cin >> num1 >>;
	cin >> num2 >>;

	cout <<"The sum is" << prim.getSum() << endl;
	cout <<"The average is" << prim.getAverage() << endl;

	return 0;
}
