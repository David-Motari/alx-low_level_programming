#include "main.h"

/**
 *print_sign - checks if sign on number is postive or negative.
 *@n: integer to be assessed
 *
 *Checks sign of number positive or negative.
 *Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
