#include "main.h"
#include <stdio.h>

/**
* main - calls program to encode string
*
* Return:  0.
*/
int main(void)
{
char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
char *sp;

sp = leet(s);
printf("%s", sp);
printf("%s", s);
return (0);
}
