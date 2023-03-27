#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
