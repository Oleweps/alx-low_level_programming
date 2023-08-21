#include "main.h"

/**
  *_strchr - entry point
  *@s: string of characters
  *@c: character to locate
  *
  * Return: 0 if success
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
