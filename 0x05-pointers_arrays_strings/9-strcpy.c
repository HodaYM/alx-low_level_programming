#include "main.h"
/**
 * _strcpy - A functon that copies the string pointed to by src
 * @dest: The destnation value
 * @src: The source value
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int d;
for (d = 0; d != '\0'; d++)
{
dest[d] = src[d];
}
dest[d++] = '\0';
return (dest);
}
