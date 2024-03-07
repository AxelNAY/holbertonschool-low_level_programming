#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks numbers
*
* @c: Character to analyse.
*
* Return: 1 if success or 0 otherwise.
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}

/**
* _atoi1 - Converts a string to an integer.
* @s: pointer s.
*
* Return: Values or 0
*/

int _atoi(char *s)
{
unsigned int n = 0;
int ver = 0;
do {
if (*s >= '0' && *s <= '9')
{
n = (n * 10) + (*s - '0');
ver = 1;
}
else if (n > 0)
break;
} while (*s++);
return (n *neg_pos);
}

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int res, mul1, mul2;
mul1 = _atoi(argv[1]);
mul2 = _atoi(argv[2]);
res = mul1 *mul2;
printf("%d\n", res);
return (0);
}
}
