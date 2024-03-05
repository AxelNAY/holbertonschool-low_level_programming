#include "main.h"

/**
* _strpbrk - prints the chessboard.
* @s: string.
* @accept: substring.
* Return: pointer s.
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; a[i]; i++)
{
for (j = 0; j < 8; j++)
{
  printf (a[i][j]);
}
}
return ('\0');
}
