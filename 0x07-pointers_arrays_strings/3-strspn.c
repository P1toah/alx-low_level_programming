#include "main.h"

/**
 *_strspn - length of a substring
 *@s: intial segment
 *@accept: the substring
 *
 *Description: This function return the length of a prefix substring.
 *
 *Return: The number of bytes of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (*s != '\0' && strchr(accept, *s) != NULL)
{
i++;
s++;
}
return (i);
}
