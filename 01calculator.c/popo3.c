#include <stdio.h>

int main()
{
	char h;

	printf("Please enter any character: ");
	scanf("%c", &h);

	switch(h)
	{
		case 'a':
			printf("The char is a vowel");
			break;
		case 'e':
			printf("The char is a vowel");
			break;
		case 'i':
			printf("The char is a vowel");
			break;
		case 'o':
			printf("The char is a vowel");
			break;
		case 'u':
			printf("The char is a vowel");
			break;
		default:
			printf("The char is a consonant");	
	}
	return 0;
}
