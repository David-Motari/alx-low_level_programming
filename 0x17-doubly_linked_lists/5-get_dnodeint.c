#include "lists.h"

/**
* get_dnodeint_at_index - gets address of node in doubly linked list.
* @head: head node of dlistint.
* @index: position of node in list.
*
* Return: NULL if no node else address of the node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index; index--)
{
if (head == NULL)
	return (NULL);
head = head->next;
}
return (head);
}
