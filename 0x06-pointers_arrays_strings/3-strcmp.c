#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: First string
 *@s2: second string
 *
 *Description: This function compares s1 to s2
 *
 *Return: Intergers <=/> when s1 is found
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] && (s1[i] == s2[i]))
i++;
return (s1[i] - s2[i]);
}
