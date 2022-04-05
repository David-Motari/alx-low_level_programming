#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - calls function to concatenate all the arguements of a prog.
*
* Return: 0.
*/
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
