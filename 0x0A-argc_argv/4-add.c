#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program adds two positive numbers.
 * @argc: argument count.
 * @argv: argument vector, array of strings.
 * Description: if no number is passed to the program print 0. If one of
 * the numbers contains symbols that are not digits, print error.
 * Return: 0 if program works and 1 if error.
 */

int main(int argc, char **argv)
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
