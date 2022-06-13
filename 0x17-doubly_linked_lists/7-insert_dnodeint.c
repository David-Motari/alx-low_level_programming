#include "lists.h"

/**
* insert_dnodeint_at_index - inserts new node at given position.
* @h: pointer to the head.
* @idx: position to insert node.
* @n: integer to insert.
*
*Return: address of the new node or NULL if it fails.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *trav = *h, *newnode;

if (idx == 0)
	return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
trav = trav->next;
if (trav == NULL)
	return (NULL);
}

if (trav->next == NULL)
	return (add_dnodeint_end(h, n));

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->prev = trav;
newnode->next = trav->next;
trav->next->prev = newnode;
trav->next = newnode;

return (newnode);

}
