#include "main.h"

/**
 * print_triangle - Function prints a triangle.
 * @size: size of the triangle.
 * Only use _putchar function to print.
 * Use # character to print the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		j = size - 1 - i;
		k = i + 1;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
		_putchar('\n');
}
