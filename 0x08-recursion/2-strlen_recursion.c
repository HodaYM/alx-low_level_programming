#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: A pointer to the string that will be measured
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s > '\0')
{
len += _strlen_recursion(s + 1) + 1;
}
return (len);
}
