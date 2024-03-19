#include<iostream>

using namespace std;

class Prim
{
	private:
		double num1;
		double num2;
	public:
		Prim(double a, double b)
		{
			num1 = a;
			num2 = b;

		}
		double getSum()
		{

			return num1 + num2;
		}
		double getAverage()
		{

			return ((num1 + num2)/2);
		}
};

int main(void)
{
	Prim prim1();

	cin >> num1 >>;
	cin >> num2 >>;

	cout <<"The sum is" << Prim.getSum() << endl;
	cout <<"The average is" << Prim.getAverage() << endl;

	return 0;
}
