#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
*_islower - if lowercase character and prints 1 and 0 for otherwise.
*
*Checks if lowercase character
*Returns: Always 0 
*
*/

int _islower(int c)
{
  return (c >= 'a' && c <= 'z');
}
