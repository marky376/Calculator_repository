#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, m, j;
    a = 0;
    m = 10;


    do 
    {

        j = a * m;
        a += 1;
        printf("%d\n", j);


    }while (j < 120);
    return 0;
}

