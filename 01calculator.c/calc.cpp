#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	char sign;



	cout << "Please enter value for a: ";
	cin >> a;

	cout << "Please enter value for b; ";
	cin >> b;

	cout << "Please enter the sign to be used: ";
	cin >> sign;
	switch (sign)
		case '+':
			int c;
			c = a + b;
			cout << c;


		case '-':
			c = a - b;
			cout << c;
	
}
