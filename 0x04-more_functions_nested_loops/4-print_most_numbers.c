#include "main.h"

/**
* print_most_numbers - Function that prints the numbers from 0 to 9 and
* Description: Prints the numbers exclude 2 and 4
* Return: The printed numbers from 0 to 9
*/
void print_most_numbers(void)
{
int x = 0;
for (; x = 0; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_Putchar(x + '0');
}
}
_putchar('\n');
}
