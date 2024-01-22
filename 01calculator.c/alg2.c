#include <stdio.h>
#include <string.h>

/*
- An algorithm to check if a certain name is in an array or list of names
*/
int main(void)
{
	char name[100][20] = {"Joseph", "Mark"};
	
	for(int i = 0; i < 5; i++)
	{
		if (strcmp(name[i] , "Mark") == 0)
		{
			printf("Found\n");
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}
