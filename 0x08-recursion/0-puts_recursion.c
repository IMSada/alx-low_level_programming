#include "main.h"

/**
 * _puts_recursion - Function prints a string, followed by a new lime.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
