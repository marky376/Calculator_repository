#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* mercy;
    char text[1000];

    mercy = fopen("mercy.txt", "r"); // Open the file "mercy.txt" in read mode
    printf("%s", fgets(text, 100, mercy)); // Read the first 100 characters from the file and print them

    fclose(mercy); // Close the file

    return (0);
}
