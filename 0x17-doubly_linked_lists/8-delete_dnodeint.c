#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of doubly linked list
* @head:pointer to the head of the doubly linked list
* @index: position of node to delete.
*
* Return: 1 if successful, -1 if failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *trav = *head;
if (*head == NULL)
	return (-1);
for (; index; index--)
{
if (trav == NULL)
	return (-1);
trav = trav->next;
}
if (trav == *head)
{
*head = trav->next;
if (*head)
	(*head)->prev = NULL;
}
else
{
trav->prev->next = trav->next;
if (trav->next)
	trav->next->prev = trav->prev;
}
free(trav);
return (1);
}
