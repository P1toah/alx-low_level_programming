#include "main.h"

/**
**_strcat -concatenation of strings
*@dest: destination string
*@str: source string
*
*Description:This functions returns to dest
*return dest
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
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
