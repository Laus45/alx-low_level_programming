#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 * @n: to carry the last digit
 * Return: (n)
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
