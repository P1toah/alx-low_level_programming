#include "main.h"

/**
 *reverse_array - reverse a string
 *@a: array of intergers
 *@n: number of elents in the array
 *
 *Description: This function reverse the order of arrays.
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
