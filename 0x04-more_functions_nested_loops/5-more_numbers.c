#include "main.h"

/**
 * more numbers - Function prints 10 times the numbers 0 to 14
 * Description: Can only use _putchar 3 times.
 * 
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (c < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
