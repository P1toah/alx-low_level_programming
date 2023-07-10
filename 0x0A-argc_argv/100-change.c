#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi -converts a string to an interger
 *@s: the string to be converted
 *
 *Return: the int converted from the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
i++;
}
return (sign *result);
}

/**
 *main - prints the minimum number of coins to make change
 *@argc: the argument
 *@argv: the array of argument
 *
 *Return: 0 on sucess else 1
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = _atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;
coins++;
}
printf("%d\n", coins);
return (0);
}
