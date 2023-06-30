#include "main.h"

/**
 *rot13 - Encodes a string using ROT13
 *@str: The string to be encoded
 *
 *Description:This function encodes using rot13
 *
 *Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i]; i++)
{
for (j = 0; input[j]; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}
return (str);
}
