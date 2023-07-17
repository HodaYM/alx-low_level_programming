#include <stdio.h>
/**
 * * main - Entry point
 *
 * Print all the numbers in lowercase
 *
 * Return:Always = 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		char c = i + '0';

		putchar(c);
	}
	putchar('\n');
	return (0);
}
