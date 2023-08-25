#include "main.h"

/**
 * _strncpy - copy a string from index 0 of `dest`.
 * @dest: string character
 * @src: string character
 * @n: number of characters to copy over
 * Return: `dest` edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src [i];
	
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
