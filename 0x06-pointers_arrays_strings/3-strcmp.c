#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, r = 0, x;
while (s1[a])
{
a++;
}
while (s2[b])
{
b++;
}
if (a <= b)
{
x = a;
}
else
{
x = b;
}
while (c <= x)
{
if (s1[c] == s2[c])
{
c++;
continue;
}
else
{
r = s1[c] - s2[c];
break;
}
c++;
}
return (r);
}
