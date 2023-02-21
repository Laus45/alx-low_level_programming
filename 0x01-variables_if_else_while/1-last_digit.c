#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - we still have to use the if commands to random a number
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (n < 0)
	{
	printf("Last digit of %-d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
