#include "main.h"

/**
* _strspn - finds the length of the prefix substring
* @s: string 
* @accept: string containing the characters to match
*
* Return: length of prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, count, FLAG;

count = 0;

for (i = 0; s[i] != '\0'; i++)
{
FLAG = 0;
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
{
count++;
FLAG = 1;
}
if (FLAG == 0)
return (count);
}
return (0);
}
