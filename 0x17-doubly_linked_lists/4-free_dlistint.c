#include "lists.h"

/**
* free_dlistint-frees doubly linked list/avoid memory leak
* @head - doubly linked list head
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *trav;

while (head != NULL)
{
trav = head->next;
free(head);
head = trav;
}

}
