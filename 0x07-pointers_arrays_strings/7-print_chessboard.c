#include "main.h"

/**
 *print_chessboard - prints the chess board
 *@a: the argument passed
 *
 *Description: This function prints a chessboard.
 *
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; i < 8; j++)
{
char c = a[i][j];
_putchar(c);
_putchar(' ');
}
_putchar('\n');
}
}
