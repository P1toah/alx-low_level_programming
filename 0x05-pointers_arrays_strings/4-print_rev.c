#include "main.h"

/**
 *print_rev -print the string in reverse
 *@s: reverse string
 *Description:This function prints a string in string
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != 0)
length++;
for (int i = length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
