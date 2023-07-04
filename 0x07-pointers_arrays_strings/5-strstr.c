#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: the string
 *@needle: the substring
 *
 *Description: This string locates a string
 *
 *Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}


