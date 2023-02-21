#include <stdio.h>
#include <stdlib.h>

/**
 * main - Numbers followed by a comma till 9
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
