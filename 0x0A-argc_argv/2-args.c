#include "main.h"
#include <stdio.h>

/**
 * main - Program prints all arguments it receives.
 * @argc: argument count.
 * @argv: array of strings, argument vector.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
