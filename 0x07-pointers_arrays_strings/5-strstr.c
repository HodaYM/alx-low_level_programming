#include <stdio.h>
#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: This is the main string to be examined
 * @needle: This is the sub-string to be searched in haystack string
 * Return: A pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *p1 = haystack;
char *p2 = needle;
while (*p1 == *p2 && *p2 != '\0')
{
p1++;
p2++;
}
if (*p2 == '\0')
return (haystack);
}
return (NULL);
}
