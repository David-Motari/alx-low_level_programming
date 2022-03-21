#include "main.h"

/**
*swap_int - swaps 2 numbers/variables
*@a: first variable
*@b: second variable
*
* Return: 0
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
