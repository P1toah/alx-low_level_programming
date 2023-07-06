#include "main.h"

/**
 *_sqrt_recursion - finds the square roots of a number
 *@n: the no that we find square root for
 *
 *Return: natural square root of n else -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (find_sqrt(n, 0, n));
}
/**
 *find_sqrt - helper function to find square root
 *@n: the number to find square root for
 *@start: starting point of search
 *@end: ending point of search
 *
 *Return: n square root else -1
 */
int find_sqrt(int n, int start, int end)
{
int mid = ((start + end) / 2);
if (start <= end)
{
if (mid * mid == n)
return (mid);
else if (mid * mid > n)
return (find_sqrt(n, start, mid - 1));
else
return (find_sqrt(n, mid + 1, end));
}
return (start - 1);
}
