#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi - converts a string to an interger
 *@s: strings to be converted
 *
 *Return: the int converted from string
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
 *is_positive_number - checks if a number is positive
 *@s: the string to check
 *
 *Return: return 1 if positive else 0
 */
int is_positive_number(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 *main - prints positive number printed out as a command line arguments
 *@argc: arguments
 *@argv: vector of arguments
 *
 *Return: 0 success and 1 error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
exit(1);
}
sum += _atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

