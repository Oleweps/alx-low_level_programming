#include <stdlib.h>
#include "main.h"

void *_memset(char *s, char b, unsigned int n);
/**
  **_memset - fills memory with a constant byte
  *@s: to be filled parameter
  *@b: characters to be copied
  *@n: number of times
  *Return: pointer to s
  */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
  **_calloc - allocates memory for an array
  *@nmemb: number of elements in the array
  *@size: size of each element
  *Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
