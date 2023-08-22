#inculde "main.h"

/**
 * print_square - Function prints a square.
 * @size: size of square.
 * Only use _putchar function to print.
 * use # character to print square.
 */
void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)
		_putchar('\n');

	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
