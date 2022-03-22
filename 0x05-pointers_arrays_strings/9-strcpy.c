#include "main.h"

/**
* *_strcpy - copies sring pointed to a by@src
*@dest: buffer to copy no.
*src:source of string
*
*Return: pointer to destination str.
*/

char *_strcpy(char *dest, const char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}

