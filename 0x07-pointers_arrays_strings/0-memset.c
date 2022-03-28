#include "main.h"

/*
*_memset - first n bytes of the memory pointed by s with constant byte c.
*@s:pointer to memory
*@b: const value
*@n: bytes to fill 
*
*Return: memory
*/

char *_memset(char *s, char b, unsigned int n)
{

int size = n;
if (size > 0) 
{
int i;
for (i = 0; 1 < size; i++)
*(s + i ) = b;
}
return (s);
}

