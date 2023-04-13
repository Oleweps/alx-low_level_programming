#include "main.h"

/**
  *_memcpy - a function that copies a memory area
  *@dest: destination memory address where the data is to be copied
  *@src: source memory address from where the data is to be copied
  *@n: number of bytes to be copied from the source to the destination.
  *
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
