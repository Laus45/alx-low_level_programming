#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @abs:  parameter to be checked
 * Return: 0 Always success
 */

int _abs(int abs)
{
	if (abs < 0)
		abs = -(abs);
	else
		abs = abs;
	return (abs);
}
