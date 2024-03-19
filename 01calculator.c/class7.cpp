#include<iostream>

using namespace std;

class Prim
{
	private:
		double num1;
		double num2;
	public:
		double Prim(double a, double b)
		{
			num1 = a;
			num2 = b;

		}
		double getSum()
		{

			return a + b;
		}
		double getAverage()
		{

			return ((a + b)/2);
		}
};

int main(void)
{
	Prim prim;
	cin >> prim.num1 >>;
	cin >> prim.num2 >>;

	cout <<"The sum is" << prim.getSum() << endl;
	cout <<"The average is" << prim.getAverage() << endl;

	return 0;
}
