#include "main.h"
#include <stdio.h>

/**
* main - converts lowercase to UPPERCASE
*
* Return:  0.
*/
int main(void)
{
char str[] = "Look up!\n";
char *ptr;

ptr = string_toupper(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}

