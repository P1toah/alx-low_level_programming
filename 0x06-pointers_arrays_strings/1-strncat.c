#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination of string
 *@src: source of string
 *@n: maximum number of bytes required to be used in src
 *
 *Description: Appends the first bytes from src to dest string
 *
 *Return: A pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr)
ptr++;
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';
return (dest);
}
