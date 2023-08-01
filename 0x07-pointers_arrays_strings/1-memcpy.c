#include "main.h"
#include <string.h>
/**
 *  _memcpy - Entry point
 *  @src: input
 *  @n: input
 * @dest: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
dest[i] = src[i];
return (dest);
}
