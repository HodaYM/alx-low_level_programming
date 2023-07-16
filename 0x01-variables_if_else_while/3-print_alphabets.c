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
};
if (c <= 'z')
{
	putchar('n');
};
for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
};

return (0);
}
