#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  *is_palindrome - check if the string is palindrome
  *@s: the string to be reversed
  *Return: 1 if the string is palindrome, 0 if it is not
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  *_strlen_recursion - returns the length of the string
  *@s: the string to compute the length of
  *Return: length of the string s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  *check_pal - recursively check the characters for palindrome
  *@s: string to check
  *@i: iterator
  *@len: length of the string
  *Return: 1 if palindrome, 0 if not
  */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
