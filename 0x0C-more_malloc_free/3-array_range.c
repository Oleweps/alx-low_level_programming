#include "main.h"
#include <stdlib.h>

/**
  **array_range - create an array of integers
  *@min: minimum range
  *@max: maximum range of values stored and number of elements
  *Return: pointer
  */

int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
