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

return (find_sqrt(n, 1));
}
/**
 *find_sqrt - helper function to find square root
 *@n: the number to find square root for
 *@guess: guess of the square root
 *
 *Return: n square root else -1
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (n);
else if (guess * guess > n)
return (-1);

return (find_sqrt(n, guess + 1));
}
