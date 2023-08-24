#include "main.h"

/**
 * puts2 - Function prints every other character of a string starting
 * with the first character.
 * @str: array string type character
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
