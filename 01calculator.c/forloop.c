#include <stdio.h>

int main()
{
    int k, i, b;
    char j = '*';

    k = 6;

    for (i = 1; i <= k; i++) // Loop for rows
    {
        for (b = 1; b <= i; b++) // Loop for columns
        {
            printf("%c\n", '*'); // Print asterisk
        }
        j++; // Increment asterisk character
    }

    return 0;
}
