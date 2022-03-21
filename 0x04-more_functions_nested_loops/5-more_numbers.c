#include "main.h"

/**
*more_numbers - prints 1 - 14, x10
*@i: variable
*@j: variable
*
*Prints 1 - 14 ten times
*Return: 0
*/

void more_numbers(void)
{
char i, j;
i = 0;
while (i < 10)
{
j = 0;
while(j < 14)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
