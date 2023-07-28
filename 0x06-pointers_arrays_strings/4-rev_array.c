#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int x, y;
for (y = n - 1; y >= n / 2; y--)
{
x = a[n - 1 - y];
a[n - 1 - y] = a[y];
a[y] = x;
}
}
