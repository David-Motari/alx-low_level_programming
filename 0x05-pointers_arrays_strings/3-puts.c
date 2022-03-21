#include "main.h"

/**
 *_puts prits a string in standard output
 *@str string to be printed
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
