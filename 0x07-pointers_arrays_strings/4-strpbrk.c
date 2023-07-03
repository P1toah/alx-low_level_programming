#include "main.h"

/**
 *_strpbrk - string that finds any bytes
 *@s: Intial string
 *@accept: The searched string
 *Description: This function locates first occurence of s
 *
 *Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (strchr(accept, *s) != NULL)
return (s);
s++;
}
return (NULL);
}
