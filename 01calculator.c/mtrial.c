#include <stdio.h>
/*
int main()
{
	FILE* mptr;

	mptr = fopen("mptr.txt", "w");
	fprintf(mptr, "My name is Mark Munyao and i'm an aspiring Software engineer");

	fclose(mptr);

	return (0);
}*/
int main()
{
	FILE* mptr;
	char mp[100];

	mptr = fopen("mptr.txt", "r");

	if (mptr != NULL)
	{
		while (fgets(mp, sizeof(mp), mptr) != NULL)
			printf("%s", mp);
	}
	else
	{
		printf("Error: can't read the file contents");
	}
	fclose(mptr);

	return (0);
}
