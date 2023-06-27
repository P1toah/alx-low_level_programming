#include "main.h"

/**
 *print_rev -print the string in reverse
 *@s: reverse string
 *Description:This function prints a string in string
 */
void print_rev(char *s)
{
if (s == NULL)
return;
char *ptr = s;
int length = 0;
 
while (*ptr != '\0')
{
length++;
ptr++;
}
ptr--;
while (length >= 0)
{
_putchar(*ptr);
ptr--;
length--;
}
_putchar('\n');
}

