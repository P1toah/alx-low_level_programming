#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: arguments
 *@argv: array of arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
int result;
int num1;
int num2;
char *operator;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

operation = get_op_func(operator);
if (operation == NULL)
{
printf("Error\n");
return (99);
}
 if ((*operator == '/' || *operator == '%') &&num2 == 0)
{
printf("Error\n");
return (100);
}
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}

