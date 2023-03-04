#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
	int longi = 0, u = 0, o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	u = longi - 1;
	for (o = 0; o <= u; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
