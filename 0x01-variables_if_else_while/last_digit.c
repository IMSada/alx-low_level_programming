#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine the last digit of the number stored in the variable n
 * greater than or less than 5, or is zero.
 *
 * Return: Alwayss 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n); 
	}
	else if (n == 0)
	{
		printf("LAst digit of %d is %d and is 0\n", n);
	}
	else if (n < 6 AND n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
