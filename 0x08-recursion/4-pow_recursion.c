#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power of y
 * @x: The value that will be multiplied
 * @y: The count of times that will multiply the value
 * Return: The multipliton result of y times
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
