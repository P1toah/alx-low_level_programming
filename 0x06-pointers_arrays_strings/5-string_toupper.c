#include "main.h"

/**
 *string_toupper -changes lowercase to uppercase
 *@str: The string to be modified
 *
 *Description: This function convert lowercase to uppercase.
 *
 *Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
i++;
}
return (str);
}
