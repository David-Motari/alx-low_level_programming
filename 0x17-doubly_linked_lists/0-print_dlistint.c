#include "lists.h"

/**
* print_dlistint - prints all items in a doubly linked list.
* @h: dlistint_t list traversal pointer
*
* Return: no. of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t node_count = 0;

while (h)
{
	node_count++;
	printf("%d\n", h->n);
	h = h->next;
}
return (node_count);
}
