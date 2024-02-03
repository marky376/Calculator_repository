#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int c = 4;

        printf("%d\n", c); // Print the initial value of c
        printf("%d\n", c++); // Post-increment c and print the previous value

        printf("%d\n", c); // Print the updated value of c

        exit(0); // Exit the program, skipping the rest of the code

        printf("%d\n", ++c); // This line will not be executed

        return (0);
}
