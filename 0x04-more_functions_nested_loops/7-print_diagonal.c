#include "main.h"

/**
 * print_diagonal - Function draws a diagonal line in the terminal.
 * @n: number of times the character \ is printed.
 * only use _putchar function to print.
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j > 0 )
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
