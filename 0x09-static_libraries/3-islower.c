#include "main.h"

/**
 * _islower - checks if the character entered is lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if is lower; 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
