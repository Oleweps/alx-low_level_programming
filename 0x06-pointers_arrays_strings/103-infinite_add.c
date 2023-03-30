#include "main.h"

/**
 * infinite_add - this function adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, len1 = strlen(ni), len2 = strlen(n2);

	if (len1 + len2 >= size_r)
	{
		return (0);
	}
	while (len1 > 0 || len2 > 0 || carry > 0)
		int digit1 = len1 > 0 ? n1[--len1] - '0' : 0;
	int digit2 = len2 > 0 ? n2[--len2] - '0' : 0;

	sum = digit1 + digit2 + carry;
	carry = sum / 10;
	r[--size_r] = sum % 10 + '0';
	r += size_r;
	while (*r == '0' && *(r + 1) != '\0')
	{
		r++;
	}
	*++r = '\0';
	return (r - size_r);
}

