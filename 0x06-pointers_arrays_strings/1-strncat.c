#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * This function will use at most bytes of src
 * @dest: The string that to be appended
 * @src: The string that to be appended to dest
 * @n: The number of bytes of src to be appended to dest
 * Return: A pointer to th eresulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
