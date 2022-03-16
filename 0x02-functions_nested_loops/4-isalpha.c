#include "main.h"
#include <ctype.h>

/**
 *_isalpha - Returns 1 if c is a letter, lowercase or uppercase.
 *@c: assembles a character type
 *
 *Checks if alphabet is lower or capital
 *Return: 0;
 *
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
