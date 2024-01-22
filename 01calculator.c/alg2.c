#include <stdio.h>
#include <string.h>

int main(void)
{
	sting name[] = {"Joseph", "Mark"};
	
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
