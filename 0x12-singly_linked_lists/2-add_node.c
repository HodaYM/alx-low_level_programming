#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - A function that adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string that will be added to the node
 * Return: The address of the new element, otherwise NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
if (head != NULL && str != NULL)
{
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
return (NULL);
tmp->str = strdup(str);
tmp->len = _strlen(str);
tmp->next = *head;
*head = tmp;
return (tmp);
}
return (0);
}
/**
 * _strlen - A function that returns the length of a string
 * @s: The string to be counted
 * Return: The string length
 */
int _strlen(const char *s)
{
int c = 0;
while (*s)
{
s++;
c++;
}
return (c);
}
