#include "main.h"

/**
 *_strlen-returning the length of a string
 *@s: using (char *s)
 *
 *Return: length of string
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}
