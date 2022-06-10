#include "lists.h"

/**
* add_dnodeint_end - adds a node to the beginning of the list.
* @n: integer.
* @head: - head pointer.
*
* Return: null if fail else address of the new element.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *lastnode;
newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}

lastnode = *head;
while (lastnode->next != NULL)
	lastnode = lastnode->next;

lastnode->next = newnode;
newnode->prev = lastnode;

return (newnode);
}
