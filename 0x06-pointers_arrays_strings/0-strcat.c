#include "main.h"

/**
**_strcat - concats two strings
*src: string one(Source)
*@dest: String two(Destination)
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}

