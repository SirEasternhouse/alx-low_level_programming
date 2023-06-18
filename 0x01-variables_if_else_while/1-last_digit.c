#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - evaluation of n last digit number
 *Return: succeful completion of task
 */
int main(void)
{
	int l;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

	if (l != 0 && l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
