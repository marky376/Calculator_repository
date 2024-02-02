/**
 * Reverses a string, excluding vowels.
 * 
 * This function takes a string as input and reverses it, while excluding any vowels present in the string.
 * Vowels are defined as the characters 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'.
 * The function modifies the input string in-place and returns a pointer to the modified string.
 * 
 * @param s The input string to be reversed.
 * @return A pointer to the modified string.
 */
char *reverseExceptVowels(char *s)
{
    // Implementation details...
}
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
