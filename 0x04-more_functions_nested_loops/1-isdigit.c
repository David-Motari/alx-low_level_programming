#include "main.h"
#include <stdio.h>

/**
*_isdigit - Returns 1 if c is a digit
*@c: variable
*
*Checks for a digit (0 through 9)
*Return: 0
*/
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
