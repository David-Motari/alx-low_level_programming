#include "main.h"

/**
*print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*
*Return: void
*/
void print_alphabet(void)
{
char mot;
for (mot = 'a'; mot <= 'z'; mot++)
{
_putchar (mot);
}
_putchar ('\n');
}
