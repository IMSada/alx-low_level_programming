#include "main.h"

/**
 *prints_alphabet - Prints alphabets in lowercase.
 *
 *Return: Always 0.
 */
void print_aplhabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}