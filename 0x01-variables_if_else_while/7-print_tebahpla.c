#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabet in reverse order
 * Return: 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
	putchar('\n');

	return (0);
}
