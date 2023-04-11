#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_strdup - duplicates new memory space
  *@str: string parameter
  *Return: 0 if success
  */

char *_strdup(char *str)
{
	char *dup;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		dup[r] = str[r];
	return (dup);
}
