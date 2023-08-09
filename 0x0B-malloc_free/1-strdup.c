#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory
 * @str: The copy of the string
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
int a = 0, s = 1;
char *n;
if (str == NULL)
return (NULL);
while (str[s])
{
s++;
}
n = malloc((sizeof(char) * s) +1);
if (n == NULL)
return (NULL);
while (a < s)
{
n[a] = str[a];
a++;
}
n[a] = '\0';
return (n);
}
