#include "main.h"

/**
 * string_toupper - converts all lowercase to UPPERCASE
 * @s: string to modify
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
int i = 0;

while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 'a' - 'A';
i++;
}
return (s);
}

