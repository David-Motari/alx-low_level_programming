#include "holberton.h"
#include <stdlib.h>

/**
*_strdup - returns pointer to a new string 
*that is a duplictate of string s
*@s: string to be duplicated
*
*Return: if s == null or inadequte space - NULL
* else return piinter to duplicate string of s
*/

char *_strdup(char *s)
{
char *duplicate;
int i, l = 0;

if (s == NULL)
return (NULL);

for (i =0; s[i]; i++)
l++;

duplicate = malloc(sizeof(char) * (l + 1));
if (duplicate == 0)
return (NULL);

for (i = 0; s[i]; i++)
duplicate[i] = s[i];

duplicate[l] = '\0';

return (duplicate);
}
