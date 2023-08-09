#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2 dimensional grid
 * thar was created before
 * @grid: A grid of memories
 * @height: An integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
int l = 0;
for (; l < height; l++)
free(grid[l]);
free(grid);
}
