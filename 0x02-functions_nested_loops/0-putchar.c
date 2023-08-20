#include <stdio.h>

/**
 * main - Prints the '_putchar'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');

	return (0);
}
