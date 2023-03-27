#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination array
 * @src: source array
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == null)
		return (null);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
