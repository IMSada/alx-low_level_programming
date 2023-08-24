#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: char type pointer
 *
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
