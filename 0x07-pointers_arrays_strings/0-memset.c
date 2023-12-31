#include "main.h"

/**
 * _memset - function fills memeory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: a pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
