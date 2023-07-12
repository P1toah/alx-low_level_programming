#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 *_putchar - the putchar function
 *
 *@c: the character to be printed
 *
 *Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

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

/**
 *main - the main function
 *
 *Return: void
 */
int main(void)
{
unsigned int i = 0;
unsigned int size = 10;
char c = 'X';
char *array;
array = create_array(size, c);
if (array != NULL)
{
for (i = 0; i < size; i++)
_putchar(array[i]);
_putchar('\n');
free(array);
}
else
{
_putchar('F');
_putchar('A');
_putchar('I');
_putchar('L');
_putchar('E');
_putchar('D');
_putchar('\n');
}
return (0);
}
