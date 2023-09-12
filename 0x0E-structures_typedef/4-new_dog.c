#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function creates a new dog.
 * @name: type pointer char name.
 * @age: type pointer float age
 * @owner: type pointer char owner
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *bingo;
	char *i, *j;
	int x, y, z;

	bingo = malloc(sizeof(struct dog));
	if (bingo == NULL)
		return (NULL);

	for (x = 0; *(name + x) != '\0'; x++)
		;
	for (y = 0; *(owner + y) != '\0'; y++)
		;
	i = malloc(sizeof(char) * x + 1);
	if (i == NULL)
	{
		free(bingo);
		return (NULL);
	}
	j = malloc(sizeof(char) * y + 1);
	if (j == NULL)
	{
		free(i);
		free(bingo);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		*(i + z) = *(name + z);
	for (z = 0; z <= y; z++)
		*(j + z) = *(owner + z);

	bingo->name = i;
	bingo->age = age;
	bingo->owner = j;

	return (bingo);
}
