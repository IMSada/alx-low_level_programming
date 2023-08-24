#include "main.h"

/**
 * _strcat - function concatenates 2 strings.
 * function appends 'src' string to the 'dest' string.
 * @n: number of elements to concatenate.
 * Return: pointer to resulting 'dest'
 */
char *_strcat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
