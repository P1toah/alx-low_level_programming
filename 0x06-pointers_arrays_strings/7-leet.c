#include "main.h"

/**
 *leet - Encodes a string
 *@str: The string to be encoded
 *
 *Description: This function replaces characters in a string
 *Return: A pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char *letters = "aeotl";
char *leet_ciphers  = "4307";
for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
{
str[i] = leet_ciphers[j];
break;
}
}
}
return (str);
}
