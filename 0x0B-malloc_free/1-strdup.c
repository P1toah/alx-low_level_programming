#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: the string to be duplicated
 *
 *Return: duplicate
 */
char *_strdup(char *str)
{
unsigned int i;
unsigned int length;
char *duplicate;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = (char *)malloc((length + 1) * (sizeof(char)));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate [i] = str[i];
return (duplicate);
}
