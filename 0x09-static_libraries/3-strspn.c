#include "main.h"

/**
 * _strspn - function that gets the length of a orefix substring.
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: number of bytes in the initial segement of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
