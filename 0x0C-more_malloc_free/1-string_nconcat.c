#include "main.h"
#include <stdio.h>
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
unsigned int l, k, s1_len, s2_len;
/* checking if the strings passing null */
if (s1 == NULL)
s2 = "";
if (s2 == NULL)
s2 = "";
/* computing the length of the strings  */
for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
;
for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
;
/* reserve memory for cases 1 & 2 */
str = malloc(s1_len + n + 1);
if (str == NULL)
{
return (NULL);
}
/* copy the first string into str */
for (l = 0; s1[l] != '\0'; l++)
str[l] = s1[l];
/*copy the second string into str */
for (k = 0; k < n; k++)
{
str[l] = s2[k];
l++;
}
str[l] = '\0';
return (str);
}
