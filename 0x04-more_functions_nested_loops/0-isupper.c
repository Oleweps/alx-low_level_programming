#include "main.h"

/**
 * _isupper - check if character is upper
 * @c: the integer to be checked
 * Return: 1 if successful and 0 otherwise
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
