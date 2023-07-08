#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *multiply - multiple two numbers
 *@num1: first number
 *@num2: second number
 *
 *Return: the result
 */

/**
 *main - the main function
 *@argc: the arguments
 *@argv: the array of arguments
 *
 *Return: 1 if error else result
 */
int multiply(int num1, int num2);
int main(int argc, char *argv[])
{
int num1, result;
int num2;
if (argc != 3)
{
printf("Error\n,");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}
int multiply(int num1, int  num2)
{
return num1 * num2;
}
