#include "main.h"

/**
  *_isdigit - checks if a character is a digit
  *@c: the number to be checked
  *
  * Return: 1 if successful and 0 otherwise
  */

int _isdigit(int c);
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
