#include "main.h"

/**
 *swap_intergers- intergers a and b
 *@a:first interger a
 *@b: second interger b
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
