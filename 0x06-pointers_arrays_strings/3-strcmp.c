#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string
 * @s2: string
 * Return: 0 if s1 and s2 are equal, < 0 if s1 < s2, > 0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i])
			else
				return (s2[i] - s1[i]);
		}
	}

	return (0);
}

