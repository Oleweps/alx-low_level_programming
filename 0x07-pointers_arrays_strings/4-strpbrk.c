#include "main.h"

/**
  *_strpbrk - entry point
  *@s: string
  *@accept: input
  *
  * Return always 0 if success
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
