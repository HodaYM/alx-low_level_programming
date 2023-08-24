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
unsigned int i = 0, j = 0, k = 0, l = 0;
char *str;
if (s1 == NULL)
s2 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[k])
k++;
if (n >= k)
l = i + k;
else
l = i + n;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
k = 0;
while (j < l)
{
if (j <= i)
str[k] = s1[k];
if (j >= i)
{
str[j] = s2[k];
k++;
}
j++;
}
str[j] = '\0';
return (str);
}
