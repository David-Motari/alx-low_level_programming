#include <stdio.h>
/**
*main - prints the lowercase alphabet in reverse.
*
*You can only use the putchar function
*(every other function (printf, puts, etc…) is forbidden)
*All your code should be in the main function
*You can only use putchar twice in your code.
*Return: 0
*/
int main(void)
{
int t;
for (t = 122; t > 96; t--)
{
putchar(t);
}
putchar('\n');
return (0);
}
