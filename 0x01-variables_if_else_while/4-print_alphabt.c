#include <stdio.h>
/**
 * * main - Entry point
 *
 * prints the alphabet in lowercase except q and e in lowercase
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
