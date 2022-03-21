#include "main.h"

/**
*_puts -  prints string in stdout
*@str: string to be printed
*
*Return: 0
*/

void _puts(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
