#include "lists.h"

/**
* add_dnodeint - adds a node to the beginning of the list.
* @n: integer.
* @head: - head pointer.
*
* Return: null if fail else address of the new element.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
d_listint_t *newnode;
newnode = malloc(sizeof(dlistint_t);

if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
if (*head != NULL)
	(*head)->prev = newnode;
*head = newnode;
return (new);
}
