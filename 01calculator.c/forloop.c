#include <stdio.h>

int main()
{
    int k, i, b;
    char j = '*';

    k = 6;

    for (i = 1; i <= k; i++)
    {
        for (b = 1; b <= i; b++)
        {
            printf("%c\n", '*');
        }
	j++;
    }

    return 0;

}
