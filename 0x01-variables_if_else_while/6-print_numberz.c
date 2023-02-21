#include <stdio.h>
#include <stdlib.h>

/**
 * main - Base 10 numbers using putchar
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');

	return (0);
}
