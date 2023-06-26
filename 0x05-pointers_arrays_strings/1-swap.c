#include "main.h"

/**
 *swap_int -Intergers a and b
 *@a: The first interger a
 *@b: The second interger b
 *
 *Description: This function takes the intergers and swaps them.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
