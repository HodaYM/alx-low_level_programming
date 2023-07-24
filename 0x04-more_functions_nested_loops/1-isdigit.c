#include "main.h"

/**
 * _isdigit - Function that checks for a digit 0 through 9
 * @c: The number to be checked
 * Return: (1) if c is a digit, (0) if any else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
_putchar('c');
return (1);
}
return (0);
}
