#include "main.h"

/**
*_strstr - locates first occurrence of substring
* @haystack: the string assessed
* @needle: substring to match
*
* Return: pointer to beginning of located substring,
*NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *str1, *pattern;

while (*haystack)
{
str1 = haystack;
pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (!*pattern)
return (str1);

haystack = str1 + 1;
}
return (0);
}

