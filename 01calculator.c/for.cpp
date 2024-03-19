#include <iostream>

using namespace std;

int main()
{
	int row;
	int col;
	int i = 0;
	
	for (row = 0; row <=5; row++)
	{
		for (col = 0; col <= row; col++)
		{
			cout << "%d", i << endl;
			i++;
		}

	}	
}
