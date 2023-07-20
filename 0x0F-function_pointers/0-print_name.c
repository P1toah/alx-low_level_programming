#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - prints the name
 *@name: the name to print
 *@f: the pointer to the name
 *
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
