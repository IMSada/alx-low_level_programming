#include "main.h"

/**
 * _strchr - function that returns a character in a string.
 * @c: parameter for c to return
 * @s: string to search character
 * Return: pointer to first occurence of character c or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
