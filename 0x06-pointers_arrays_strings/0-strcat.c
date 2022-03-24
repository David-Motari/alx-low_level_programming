#include "main.h"

/**
**_strcat - concats two strings
*@s1: src
@s2: dest
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
int a, b;

a = b = 0;
while (*(dest + a))
a++;
while ((*(dest + a) = *(src + b)))
{
a++;
b++;
}
return (dest);
}

