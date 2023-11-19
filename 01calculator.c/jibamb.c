#include <stdio.h>

int main(void)
{
	FILE* fptr;
	fptr = (fopen("mark.txt", "w"));
	
	fprintf(fptr ,"please be happy that you've gone this far in your life.\n");
	fprintf(fptr ,"And have some faith in you as well.\n");

	fclose(fptr);

	return (0);	
}
