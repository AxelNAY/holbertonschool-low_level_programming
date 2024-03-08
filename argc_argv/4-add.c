#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks numbers
* @s: string.
* Return: 1 if success or 0 otherwise.
*/

int _isdigit(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s <= 48) && (c >= 57))
return (0);
}
return (1);
}

/**
* _atoi1 - Converts a string to an integer.
* @s: pointer s.
* Return: Values or 0
*/

int _atoi(char *s)
{
int neg_pos = 1;
unsigned int n = 0;
do {
if (*s == '-')
neg_pos *= -1;
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
} while (*s++);
return (n *neg_pos);
}

/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i, add, res = 0;
for (i = 0; i < argc; i++)
{
if (_isdigit(argv[0]) != 1)
printf("0\n");
else if (_isdigit(argv[i]) != 1)
{
printf("Error\n");
return (1);
}
else
{
add = _atoi(argv[i]);
res = res + add;
}
}
printf("%d\n", res);
return (0);
}
