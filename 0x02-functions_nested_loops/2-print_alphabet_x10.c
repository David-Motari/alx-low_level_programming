#include <stdio.h>
#include "main.h"

/**
*main - for real
*print_alphabet x10 - prints 10 times the alphabet, in lowcase. 
*_putchar prints
*
*Return: void
*/
void print_alphabet(void)
{
int i;
char mot;
for (i = 0; i < 10; i++)
{
for (mot = 'a'; mot <= 'z'; mot++);
_putchar(mot);
}
 _putchar('\n');
}
