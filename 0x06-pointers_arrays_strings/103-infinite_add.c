#include "main.h"
#include <ctype.h>
/**
 * infinite_add - this function adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, len1 = strlen(ni), len2 = strlen(n2);

	if (len1 + len2 >= size_r)
	{
		return (0);
	}
	strrev(ni);
	strrev(n2);

	int carry = 0, sum, i;

	for (i = 0; i < len1 || i < len2 || carry != 0; i++)
	{
		sum = carry;
		if (i < len1)
		{
			sum += ni[i] - '0';
		}
		if (i < len2)
		{
			sum += n2[i] - '0';
		}
		r[i] = sum % 10 + '0';
		carry = sum / 10;
	}
	r[i] = '\0';
	strrev(r);

	return (r);
}
