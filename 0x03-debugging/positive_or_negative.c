#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*positive_or_negative - checksnumberstored in variable is positive or negative.
*@n: integer
*
*if the number is greater than 0: is positive
*if the number is 0: is zero
*if the number is less than 0: is negative
*Return: 0
*/

int positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);

else if (n < 0)
printf("%d is negative\n", n);

else
printf("%d is zero\n", n);

return (0);
}