#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase except q and e, followed
 * by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower, e, q;
	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
		putchar(lower);
	}

	putchar('\n');
	
	return (0);
}
