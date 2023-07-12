#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array
 *@size: size of array in bytes
 *@c: size of char
 *
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *array;
if (size == 0)
return (NULL);
array = (malloc(sizeof(char) * size));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
