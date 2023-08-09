#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - A function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: An integer
 * @height: An integer
 * Return: A pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **t, l, k;
t = malloc(sizeof(*t) * height);
if (width <= 0 || height <= 0 || t == 0)
{
return (NULL);
}
else
{
for (l = 0; l < height; l++)
{
t[l] = malloc(sizeof(**t) * width);
if (t[l] == 0)
{
while (l--)
free(t[l]);
free(t);
return (NULL);
}
for (k = 0; k < width; k++)
t[l][k] = 0;
}
}
return (t);
}
