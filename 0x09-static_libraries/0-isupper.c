#include "main.h"

/**
  * _isupper - check if character is upper
  * @x: the number to be checked
  * Return: 1 if successful and 0 otherwise
  */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
