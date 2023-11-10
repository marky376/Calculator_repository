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
        a++;
        printf("%d\n", j);


    }while (j < 100);
    return 0;
}

