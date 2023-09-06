#include "main.h"

/**
 * _puts - Function prints a string to stdout.
 * @str: array string type character.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
