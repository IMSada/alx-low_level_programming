#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char lower_case;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
	putchar(lower_case);

	putchar('\n');

	return (0);	
}
