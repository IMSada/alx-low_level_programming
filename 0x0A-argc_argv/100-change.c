#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector, array of strings.
 * Return: 0 if successful, 1 if error.
 */

int main(int argc, char **argv)
{
	int sum, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (sum >= cents[i])
				{
					count += sum / cents[i];
					sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
