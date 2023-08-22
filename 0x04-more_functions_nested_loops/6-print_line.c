#include "main.h"

/**
 * print_line - Function draws a straight line in the terminal.
 * @n: number of times the character _ is printed.
 * Only use _putchar function to print.
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');

		i++;
	}
	_putchar('\n');
}
