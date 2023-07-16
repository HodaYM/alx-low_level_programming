#include <stdio.h>
/**
 * * main - Entry point
 *
 * It prints the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');

return (0);
}
