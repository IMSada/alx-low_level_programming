#include "main.h"

/**
 * _strcat - function concatenates two strings.
 * This function appends `src` string to the `dest` string.
 * @dest: string character
 * @src: string character
 *
 * Return: pointer to resulting `dest`
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
