#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of characters of size int
  *@c: characters to assign
  *@size: size of string
  *Descrption: create an array of size size and asign characters
  *Return: NULL if fail, pointer to an array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
