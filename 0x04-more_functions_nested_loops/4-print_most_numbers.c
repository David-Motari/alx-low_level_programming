#include "main.h"

/**
*print_most_numbers - prints most numbers of 1 - 9
*&i: integer
*
*Prints one to nine, skips 2 & 4
*Return: 0
*/
void print_most_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
if (!(i == '2' || i == '4'))
_putchar(i);
_putchar('\n');
}

