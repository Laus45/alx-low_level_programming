#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Alphabet without E nad Q
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
