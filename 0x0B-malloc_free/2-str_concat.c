#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two string
 *@s1: string1
 *@s2: string2
 *
 *Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
unsigned int s1_length = 0;
unsigned int s2_length = 0;
unsigned int i, j;
char *concatenated;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_length] != '\0')
s1_length++;
while (s2[s2_length] != '\0')
s2_length++;

concatenated = (char *)malloc((s1_length + s2_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < s1_length; i++)
concatenated[i] = s1[i];
for (j = 0; j < s2_length; j++, i++)
concatenated[i] = s2[j];

concatenated[i] = '\0';
return (concatenated);
}
