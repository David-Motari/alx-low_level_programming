#include "main.h"

/**
*print_rev - prints str in stdout but reverse
*@s: strint to be printed
*
*Return: 0
*/
void print_rev(char *s)
{
int i = 0;

while (*(s + i))
i++;
i = i - 1;
while (1 >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
