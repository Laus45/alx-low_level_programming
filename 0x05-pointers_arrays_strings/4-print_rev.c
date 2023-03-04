#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int long_int = 0;
	int u;

	while (*s != '\0')
	{
		long_int++;
		s++;
	}
	s--;
	for (u = long_int; u > 0; u--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
