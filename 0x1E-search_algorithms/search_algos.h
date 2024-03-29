#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

/*Library Headers*/
#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
void search_array(int *array, size_t index, size_t s_val);
int binary_search(int *array, size_t size, int value);
#endif /*_SEARCH_ALGOS_H*/
