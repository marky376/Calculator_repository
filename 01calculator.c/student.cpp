#include <iostream>

using namespace std;

int main(void)
{
	const int numStudents = 6;
	int marks[numStudents];
	int sum = 0;
	int i;

	for (i = 0; i < numStudents; ++i)
	{
		cout << "Enter students marks " << i + 1 << " : ";
		cin >> marks[i];
	


		while (marks[i] < 0)
		{
			cout << "Invalid entry please enter a valid number ";
			cin >> marks[i];
		}

	
	}

	sum += marks[i];

	double average = (sum) / numStudents;

	cout << "Average marks of " << numStudents << " is " << average << endl;

	return 0;	
}
