#include "main.h"

/**
* _strpbrk - prints the chessboard.
* @s: chessboard.
* Return: pointer s.
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar((*(a + i))[j]);
}
_putchar('\n');
}
Return ('\0');
}
