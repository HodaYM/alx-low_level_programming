#include <stdio.h>
/**
 * main - Entry point
 *
 * It prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	{
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		return (0);
	}
}
