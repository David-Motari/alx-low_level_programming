#ifndef LISTS_H
#define LISTS_H

/*header files*/

#include <stdlib.h>
#include <stdio.h>

/**
* Struct dlistint_s - node definition
* @n: integer
* @prev: pointer to previous node.
* @next: pointer to next node.
*/

typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

/*PROTOTYPES*/
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint **head, const int n);

#endif
