#include "main.h"

/**
*_strcat - concatenation of strings
*@dest: destination string
*@src: source string
*Description: characters from src to dest.
*return: void
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;/*Function implementation*/
while (*ptr)
ptr++;
while (*src)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
