#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, m, j;
    a = 0;
    m = 10;

    // Perform the following block of code at least once
    do 
    {
        // Calculate the product of 'a' and 'm'
        j = a * m;

        // Increment 'a' by 1
        a += 1;

        // Print the value of 'j'
        printf("%d\n", j);

    } while (j < 120); // Repeat the loop until 'j' is less than 120

    return 0;
}
