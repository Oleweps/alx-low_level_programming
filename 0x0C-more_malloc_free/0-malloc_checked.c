#include "main.h"
#include <stdlib.h>

/**
  **malloc_checked - allocates memory space using malloc function
  *
  *@b: number of bytes
  *Return: a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	exit(98);

	return (p);
}
