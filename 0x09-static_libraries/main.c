#include "main.h"

/**
 *_puts - prints a string to the stdout
 *@s: the string to be printed
 *
 *Return: void
 */
void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
}

int main(void)
{
_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick\n");
return (0);
}
