#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers 0 to 14.
 * Can only use _putchar 3 times.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 15)
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
