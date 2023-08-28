#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring. Finds the first occurence
 * of the substring needle in the string haystack.
 * @haystack: parameter for haystack
 * @needle: parameter for needle.
 * Return: a pointer to the beginning of the located substring, or 
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
			&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
