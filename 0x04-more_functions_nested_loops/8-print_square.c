#include "main.h"
/**
 * print_square - A function that prints a square
 * @size: The size of the square
 * Return: void
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
