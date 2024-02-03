#include <iostream>

using namespace std;

int main(void)
{
	const int numStudents = 6;
	int marks[numStudents];
	int sum = 0;
	int i;

	// Prompt the user to enter the marks for each student
	for (i = 0; i < numStudents; ++i)
	{
		cout << "Enter student's marks " << i + 1 << ": ";
		cin >> marks[i];

		// Validate the input to ensure it is a non-negative number
		while (marks[i] < 0)
		{
			cout << "Invalid entry. Please enter a valid number: ";
			cin >> marks[i];
		}

		// Calculate the sum of all the marks
		sum += marks[i];
	}

	// Calculate the average marks
	double average = static_cast<double>(sum) / numStudents;

	// Display the average marks
	cout << "Average marks of " << numStudents << " students is " << average << endl;

	return 0;	
}
