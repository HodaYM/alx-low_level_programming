#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - A function that adds a new node at the end of a list
 * @head: The original linked list
 * @str: The string to be added to the node
 * Return: The address of the new element, otherwise NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list, *tmp;
if (str != NULL)
{
new_list = malloc(sizeof(list_t));
if (new_list == NULL)
return (NULL);
new_list->str = strdup(str);
new_list->len = _strlen(str);
new_list->next = NULL;
if (*head == NULL)
{
*head = new_list;
return (*head);
}
else
{
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new_list;
return (tmp);
}
}
return (NULL);
}
/**
 * _strlen - A function returns the length of a string
 * @s: The string to count
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
