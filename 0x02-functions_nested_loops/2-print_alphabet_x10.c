#include "main.h"

/**
*print_alphabet_x10 -prints alphabet 10 times
*
*Description: prints alphabet 10 times
*Return: 0
*/

void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
char mot;
for (mot = 'a'; mot <= 'z'; mot++)
_putchar(mot);
_putchar('\n');
}
}
