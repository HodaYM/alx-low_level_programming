#include "main.h"
#include <stdlib.h>
/**
 * *create_array - A function that creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The character to be initialized
 * Return: Null if it fails, otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *s = malloc(size);
if (size == 0 || s == 0)
return (NULL);
while (size--)
s[size] = c;
return (s);
}
