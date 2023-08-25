#include "main.h"

/**
 * reverse_array - Function reverses the content of an array of integers.
 * @n: number of elements of the array.
 * @a: array of integers.
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
