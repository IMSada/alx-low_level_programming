#include "main.h"

/**
 * more numbers - Function prints 10 times the numbers 0 to 14
 * Description: _putchar used not more than 3 times only.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
