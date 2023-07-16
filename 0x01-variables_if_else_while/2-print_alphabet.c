#include <stdio.h>
/**
 * This is the main function
 *
 * It prints the alphabet in lowercase
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
