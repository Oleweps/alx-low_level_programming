#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to 2 dimensinal array
  *@width: input parameter
  *@height: input parameter
  *Return: pointer to 2 dimensinal array
  */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, l;

	if (width <= 0 || height <= o)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}
	return (a);
}
