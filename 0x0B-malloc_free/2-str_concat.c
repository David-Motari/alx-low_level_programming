#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - joins 2 strings
 *@s1: string one
 *@s2: string two
 *
 *Return: NULL if concat fails, else pointer to memory contaning
 *concated strings.
 */

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, concat_i = 0, l = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
l++;

concat_str = malloc(sizeof(char) * l);

if (concat_str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
concat_str[concat_i++] = s1[i];

for (i = 0; s2[i]; i++)
concat_str[concat_i++] = s2[i];

return (concat_str);
}
