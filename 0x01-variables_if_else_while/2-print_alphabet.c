#include <stdio.h>

/**
 * Prints alphabets in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case;

	for(lower_case = 'a'; lower_case <= 'z'; lower_case++)
	putchar(lower_case);
	putchar('\n');

	return (0);

}
