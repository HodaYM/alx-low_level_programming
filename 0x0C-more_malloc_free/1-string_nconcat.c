#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - A function that concatenates two strings
 * @s1: A pointer
 * @s2: A pointer
 * @n: A number of bytes
 * Return: A pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int l, k, s1_len, s2_len;
if (s1 == NULL)
s2 = "";
if (s2 == NULL)
s2 = "";
for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
;
for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
;
str = malloc(s1_len + n + 1);
if (str == NULL)
{
return (NULL);
}
for (l = 0; s1[l] != '\0'; l++)
str[l] = s1[l];
for (k = 0; k < n; k++)
{
str[l] = s2[k];
l++;
}
str[l] = '\0';
return (str);
}
