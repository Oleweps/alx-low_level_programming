#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Returns: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
