#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: The size to be allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == 0)
exit(98);
return (ptr);
}
