#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - Allocates memmory of an array
 *@nmemb: nber of elements in an array
 *@size: size of each element in bytes
 *
 *Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
