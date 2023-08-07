#include "main.h"
/**
 * _sqrt_recursion - A function that returns
 * the natural square root of a number
 * @n: A number
 * @v: Square root
 * Return: the natural square root
 */
int square(int n, int v);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - calculates the natural square root
 * @n: A number
 * @v: The square root
 * Return: An integer
 */
int square(int n, int v)
{
if (v * v == n)
return (v);
else if (v * v < n)
return (square(n, v + 1));
else
return (-1);
}
