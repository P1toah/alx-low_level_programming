#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - adds all the numbers listed
 *@n: the number of arguments
 *
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;
if (n == 0)
return (0);
sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
