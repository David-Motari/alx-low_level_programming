#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @mot: The number of bytes to be allocated.
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int mot)
{
void *mem = malloc(mot);

if (mem == NULL)
exit(98);

return (mem);
}
