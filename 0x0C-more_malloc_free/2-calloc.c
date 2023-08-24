#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - A function that allocates memory for an array using malloc
 * @nmemb: The number of members
 * @size: The size bytes
 * Return: A pointer to the allocated memory
 * otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int m = 0, r = 0;
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
r = nmemb * size;
ptr = malloc(r);
if (ptr == NULL)
return (NULL);
while (m < r)
{
ptr[m] = 0;
m++;
}
return (ptr);
}
