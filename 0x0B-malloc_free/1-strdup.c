#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - A function that returns a pointer to a newly allocated space
 * in memory
 * @str: The copy of the string
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
int a = 0, s = 0;
char *n;
if (str == NULL)
{
return (NULL);
}
for (; str[s] != '\0'; s++)
{
n = malloc(s * sizeof(*str) + 1);
}
if (n == 0)
{
return (NULL);
}
else
{
for (; a < s; a++)
n[a] = str[a];
}
return (n);
}
