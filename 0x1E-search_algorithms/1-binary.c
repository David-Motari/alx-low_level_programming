#include "search_algos.h"

/**
 * search_array - searches the array for a value
 *
 * @array: array to search.
 * @index: index of the array
 * @s_val: value to search
 *
 * Return: value index location
 */
void search_array(int *array, size_t index, size_t s_val)
{
printf("Searching in array: ");
for (; index < s_val; index++)
printf("%d, ", array[index]);
printf("%d\n", array[index]);
}

/**
 * binary_search - searches for a value in a sorted array of integers.
 *
 * @array: array to search for value.
 * @size: size of array.
 * @value: value to search.
 *
 *  Return: (-1) if array is is not present of null
 *  else index where value is found.
 */
int binary_search(int *array, size_t size, int value)
{

size_t l, r, m;

if (array == NULL)
return (-1);
r = size - 1;
for (l = 0; l < size;)
{
search_array(array, l, r);
m = (l + r) / 2;
if (array[m] < value)
l = m + 1;
else if (array[m] > value)
r = m - 1;
else
return (m);
}
return (-1);
}
