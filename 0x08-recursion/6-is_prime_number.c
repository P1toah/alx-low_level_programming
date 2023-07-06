#include "main.h"

/**
 *is_prime_number - checks a prime number
 *@n: the number to check
 *
 *Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
return (check_prime(n, 2));
}

/**
 *check_prime - helper function to check the prime.
 *@n: the number to check
 *@divisor: checks the divisibility
 *
 *Return: 1 if prime else 0
 */
int check_prime(int n, int divisor)
{
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (check_prime(n, divisor + 1));
}
