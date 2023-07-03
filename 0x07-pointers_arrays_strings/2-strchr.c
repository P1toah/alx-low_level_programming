#include "main.h"

/**
 *_strchr - locates a character a string
 *@s: the located string
 *@c: first occurrence of the character
 *Description: This function locates a character in a string
 *
 *Return: Returns s or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}

