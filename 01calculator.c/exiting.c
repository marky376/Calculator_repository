#include <stdio.h>
#include <stdlib.h>
int main(void)
{
        int c = 4;

        printf("%d\n", c);
        printf("%d\n", c++);/* post-incrementing */


        printf("%d\n", c);
	
	exit(0);/* Exiting the code and avoiding the rest of the code */
        printf("%d\n", ++c);/* pre-incrementing */


	return (0);

}