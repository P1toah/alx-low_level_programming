#include "main.h"

/**
 *is_palindrome -checks if a string is a palindrome
 *@s: the string to check
 *
 *Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
int len;
if (s == NULL)
return (0);
len = _sterlen(s);
return (check_palindrome(s, 0, len - 1));
}

/**
 *_sterlen - checks the length of string
 *@s: the string to calculate length for.
 *
 *Return: the length of the string
 */
int _sterlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _sterlen(s + 1));
}

/**
 *check_palindrome -helper function to check is a string is a palindrome
 *@s: the string to check
 *@start: starting index
 *@end: ending index
 *
 *Return: 1 is string is palindrome else 0
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}
