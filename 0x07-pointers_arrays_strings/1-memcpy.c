#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination of memory
 *@src: source of memory
 *@n: the unsigned n bytes
 *
 *Description: This function copies the memory of an area
 *Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *newDest = dest;
unsigned int i;
for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
return (newDest);
}
