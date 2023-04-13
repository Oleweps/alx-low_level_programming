#include "main.h"

/**
  *_strlen_recursion - returns the length of the string
  *@s: string whose length is to be determined
  *Return: the length of the string s
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
