#include "main.h"
/**
 * rev_string - Afunction that reverse a string
 * @str: The string to be reversed
 * Return: void
 */
void rev_string(char *str)
{
int n = 0, x = 0;
char t;
while (str[x++])
n++;
for (x = n - 1; x >= n / 2; x--)
{
t = str[x];
str[x] = str[n - x - 1];
str[n - x - 1] = t;
}
}
