#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function prints all natural numbers from n to 98
 * user number input prints to 98, even if < 98 or > 98
 * @n: number input
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
