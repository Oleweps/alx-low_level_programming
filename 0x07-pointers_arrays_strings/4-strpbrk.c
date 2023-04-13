#include "main.h"

/**
  *_strpbrk - Find the first occurrence of any character from the string
  *'accept' in the string 's' and return a pointer to that location
  *@s: string
  *@accept: input.
  *
  *Return: A pointer to the first matching character in 's',
  *or a null pointer if no match is found.
  */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (0);
}
