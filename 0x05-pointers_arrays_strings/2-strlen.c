#include "main.h"

/**
*int_strlen - returns the length of a string
*@s: string which to find length of
*
*Return: len of s
*/

int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
