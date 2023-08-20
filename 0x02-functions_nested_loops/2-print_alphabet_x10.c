#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, ten;

	ten = 0;

	while (ten < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		ten++;
		_putchar('\n');
	}
}
