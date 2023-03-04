#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string
 */

int _strlen(char *s)
{
	int laus = 0;

	while (*s != '\0')
	{
		laus++;
		s++;
	}

	return (laus);
}
