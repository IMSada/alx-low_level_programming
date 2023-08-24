#include "main.h"

/**
 * swap_int - Function swaps the values of two integers.
 * @a: int type pointer
 * @b: int type pointer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
