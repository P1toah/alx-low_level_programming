#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: destination of string
 *@src: source of string
 *@n: maximum number of n bytes required by src string
 *
 *Description: This function copies the src to dest string
 *Return: A pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest = '\0';
return (dest);
}
