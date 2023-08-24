#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - A function that concatenates two strings
 * @s1: A pointer to the 1st string
 * @s2: A pointer to the 2nd string
 * @n: A number of bytes from n2 to concatenate
 *
 * Return: A pointer to the newly allocated space in memory
 * contains the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int l = 0, k = 0, m = 0, g = 0;
if (s1 == NULL)
s2 = "";
if (s2 == NULL)
s2 = "";
while (s1[l])
l++;
while (s2[m])
m++;
if (n >= m)
g = l + m;
else
g = l + n;
str = malloc(sizeof(char) * g + 1);
if (str == NULL)
return (NULL);
m = 0;
while (k < g)
{
if (k <= g)
str[k] = s1[k];
if (k >= l)
{
str[k] = s2[m];
m++;
}
k++;
}
str[k] = '\0';
return (str);
}
