#include <stdio.h>
/**
 * _strlen - A function that returns the length of a string
 * @str : The string to get its length of
 * Return: The length of @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
