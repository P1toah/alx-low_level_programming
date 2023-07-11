#include "main.h"
#include <stdio.h>

/**
 *_puts - puts a charactes
 *@s: the string
 *
 *Return: 0
 */
void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
}
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
