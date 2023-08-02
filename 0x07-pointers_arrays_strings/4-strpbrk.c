#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: An input
 * @accept: An input
 * Return:
 * Pointer to to the byte in s that matches one of the bytes in accept
 * Or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
return (s + n);
}
}
return (NULL);
}
