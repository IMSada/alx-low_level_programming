#include "main.h"

/**
 * print_rev - Funtion prints a string in reverse.
 * @s: array string type character,
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}	
