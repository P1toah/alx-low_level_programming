#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers
 *@separator: points to the separator
 *@n: the numbers of arguments
 *
 *Return: separator or numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
