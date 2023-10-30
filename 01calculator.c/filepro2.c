#include <stdio.h>
#include <string.h>

/*
int main(void)
{
	FILE* fptr;

	fptr = fopen("fptr.txt", "w");

	fprintf(fptr, "C is a fun programming language\n");
	fprintf(fptr, "And i love using the C language");

	fclose(fptr);

	return (0);
}*/

int main(void)
{
	FILE* fptr;
	char print[1000];

	fptr = fopen("fptr.txt", "r");

	if (fptr != NULL)
	{
		while (fgets(print, sizeof(print), fptr) != NULL)
			printf("%s", print);
		fclose(fptr);
	}
	else
	{
		printf("Error reading the input in the given file!");
	}

	return (0);
}
