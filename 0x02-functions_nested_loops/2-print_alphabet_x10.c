#include "main.h"

/**
*print_alphabet x10 - prints 10 times the alphabet, in lowcase. 
*
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
