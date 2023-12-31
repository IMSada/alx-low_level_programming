#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector, array of strings.
 * Return: 0 if program runs correctly, 1 if error.
 */

int main(int argc, char **argv)
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
