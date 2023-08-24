#include "main.h"

/**
 * rev_string - function reverses a string.
 * @s: array string type character.
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;
	
	for (i = 0; s[i] != '\0'; i++);

	k = i;
	for (i--, j = 0; j < 1 / 2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
