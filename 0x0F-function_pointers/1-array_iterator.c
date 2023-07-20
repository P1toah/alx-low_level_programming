#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - iterates an array
 *@array: the size of the array
 *@size: the size of the array
 *@action: the pointer to the function
 *Return: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
