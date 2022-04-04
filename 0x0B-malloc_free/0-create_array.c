#include "holberton.h"
#include <stdlib.h>

/**
*create_array - generates an array of xters
*@size: size of array
*@c: xter to initialize array
*
*Return: if size == 0; of error - Null alse pointer to array
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
