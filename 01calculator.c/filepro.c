#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	FILE* mercy;

	mercy = fopen("mercy.txt", "w");
	fprintf(mercy, "%s", "Fantastic stuff you're doing there at the University Of Embu");

	fclose(mercy);

	return (0);
}*/

/*
int main(void)
{
    FILE* mercy;
    char text[] = "Fantastic stuff you're doing there at the University Of Nairobi";

    mercy = fopen("mercy.txt", "w");

    if (mercy == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs(text, mercy);

    fclose(mercy);

    return 0;
}
*/


int main(void)
{
	FILE* mercy;
	char text[1000];

	mercy = fopen("mercy.txt", "r");
	printf("%s", fgets(text, 100, mercy));

	fclose(mercy);

	return (0);
}

#include <stdio.h>
/*
int main(void)
{
    FILE* mercy;
    char text[1000];

    mercy = fopen("mercy.txt", "r");
    if (mercy == NULL) {
        perror("Error opening file");
        return 1;
    }

    if (fgets(text, sizeof(text), mercy) != NULL) {
        printf("%s", text);
    } else {
        printf("Error reading from file.\n");
    }

    fclose(mercy);

    return 0;
}*/

