#include "main.h"
#include <stdio.h>

/**
  *_atoi - converts a string to an integer
  *@s: string parameter
  *Return: the int convereted from the string
  */

int _atoi(char *s)
{
	int length, i, digit, n, d, f;

	length = 0;
	digit = 0;
	n = 0;
	f = 0;
	i = 0;
	d = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
  *main - multiplies two integers
  *@argc: function parameter
  *@argv: function parameter
  *Return: 0 if success and 1 otherwise
  */
int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
