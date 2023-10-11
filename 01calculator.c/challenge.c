#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *reverseExceptVowels(char *s)
{
    int len, i, j;
    char tmp;
    char except[] = "aeiouAEIOU";

    len = strlen(s);

    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        while (strchr(except, s[i]))
            i++;
        while (strchr(except, s[j]))
            j--;

        if (i >= j)
            break;

        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    return (s);
}
