#include "main.h"

/**
 * operation - make the operation to find the root.
 * @n: number
 * @root: root of n
 * Return: the result
 */

int operation(int n, int root)
{
  if (root * root == n)
    return (root);
  else if (root * root < n)
    return (operation(n, root + 1));
  else if (root * root > n)
    return (operation(n, root - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: call operation.
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
return (operation(n, 1));
}
