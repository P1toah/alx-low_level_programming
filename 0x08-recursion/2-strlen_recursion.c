#include "main.h"

/**
 *_strlen_recursion - the length of string
 *@s: the string length calculated
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
while (*s == 0)
return (0);
return (1 + _strlen_recursion(s + 1));
}
