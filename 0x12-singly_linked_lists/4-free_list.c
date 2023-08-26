#include <stdlib.h>
#include "lists.h"
/**
 * free_list - A function that frees a list_t list
 * @head: The pointer to the first node of list_t list
 * Return: Void
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
free(head);
}
