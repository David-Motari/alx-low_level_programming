#include <stdio.h>

/**
*main - prints the size of various types.
*
*You should produce the exact same output as in the example.
*Warnings are allowed
*Your program should return 0
*You might have to install the package libc6-dev-i386 on your-
*Linux (Vagrant) to test the -m32 gcc option
*Return: 0
*/

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
