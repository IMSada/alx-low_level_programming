#include "main.h"

/**
 *print_alphabet - Prints alphabets in lowercase.
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
