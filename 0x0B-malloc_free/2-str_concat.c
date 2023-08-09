#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - A function that finds the length of a string
 * @s: A string
 * Return: An integer
 */
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - A function that concatenates two strings
 * @s1: The first string to be concatented
 * @s2: The second string to be concatented
 * Return: A pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, l;
char *n;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
n = malloc((size1 + size2) *sizeof(char) + 1);
if (n == 0)
return (0);
for (l = 0; l <= size1 + size2; l++)
{
if (l < size1)
n[l] = s1[l];
else
n[l] = s2[l - size1];
}
n[l] = '\0';
return (n);
}
