#include "main.h"
#include <stdio.h>

/**
 * print_array - Funtion prints 'n' elements of an array of integers
 * @a: array int type pointer
 * @n: int type integer
 * Numbers must be separated by comma and space.
 * Number should be displayed in the same order they are stored in array.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
