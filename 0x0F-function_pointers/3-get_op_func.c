#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 *get_op_func - choses the type of operation to use
 *@s: characters
 *
 *Return: A pointer
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (ops[i].op != NULL)
{
if (ops[i].op[0] == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
