#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
/* swap_int: this function swaps the value of two integers */
{
int x = *a;
*a = *b;
*b = x;
}
