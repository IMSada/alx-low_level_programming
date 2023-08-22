#include "main.h"

/**
 * _isdigit - Funtion that checks for a digit 0 through 9.
 * @c: an input integer
 * Return: 1 if c is a digit and 0 Otherwise.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
