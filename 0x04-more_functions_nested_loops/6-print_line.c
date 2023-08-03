#include "main.h"
/**
 * print_line - A function that draws a stright line in the terminal
 * @n: The number of times the character will be printed
 * Return: void
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
