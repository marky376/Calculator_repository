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
	double num1, num2;
	
	cout << "Enter num1"<<endl;
	cin >> num1;
	cout << "Enter num2"<<endl;
	cin >> num2;
		
	Prim prim1(num1, num2);
	cout <<"The sum is " << prim1.getSum() << endl;
	cout <<"The average is " << prim1.getAverage() << endl;
	

	return 0;
}
