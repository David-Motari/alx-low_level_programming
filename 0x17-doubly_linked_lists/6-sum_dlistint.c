#include "lists.h"

/**
* sum_dlistint - sums all items in a doubly linked list.
* @head: head pointer of the d.list
*
* Return: the sum.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}

