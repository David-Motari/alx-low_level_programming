#include <stdlib.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @mot: char to copy
* @d: number of times to copy b
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char mot, unsigned int d)
{
unsigned int i;

for (i = 0; i < d; i++)
{
s[i] = mot;
}

return (s);
}

/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
