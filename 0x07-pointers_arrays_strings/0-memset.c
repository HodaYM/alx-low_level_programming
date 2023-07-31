#include "main.h"
#include <string.h>
/**
 * _memset - Entry point
 * @s: A pointed destnation
 * @b: A constant byte
 * @n: The bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
