#include "function_pointers.h"
/**
 *int_index - the index of the array
 *@array: the array
 *@size: the size of the array
 *@cmp: pointers to the function
 *
 *Return: the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
