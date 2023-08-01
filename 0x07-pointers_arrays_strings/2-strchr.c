#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: where c returns
 * @c: a string where it will be pointed at
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
