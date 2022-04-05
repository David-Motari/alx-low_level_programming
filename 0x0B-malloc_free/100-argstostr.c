#include "holberton.h"
#include <stdlib.h>

/**
*argstostr - concats all args of prog to str
*
*@ac: the no of args passed
*@av: array of pointers to arguments
*
*Return: if ac == 0, av == 0 or function fail - NULL
*else retun pointer to string
*/

char *argstostr(int ac, char **av)
{
char *str;
int arg, byte, i, size = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
return (NULL);

i = 0;

for (arg = 0; arg < ac; arg++)
{

for (byte = 0; av[arg][byte]; byte++)
str[i++] = av[arg][byte];

str[i++] = '\n';
}
str[size] = '\0';
return (str);
}

