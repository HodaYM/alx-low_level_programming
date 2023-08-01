#include "main.h"
#include <string.h>
/**
 *  _memcpy - Entry point
 *  @src: The source that will be copied from
 *  @n: The bytes
 * @dest: the pointed destnation
 * Return: 0 Always (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
dest[i] = src[i];
return (dest);
}
