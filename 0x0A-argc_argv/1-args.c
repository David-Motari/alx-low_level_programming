#include <stdio.h>

/**
*main - prnts no of args passed
*@argc: no of args
*@argv: array
*
*Return: 0
*/
int main(int argc, char *argv[] __attribute__((__unused__)))
{
printf("%d\n", argc - 1);
return (0);
}
