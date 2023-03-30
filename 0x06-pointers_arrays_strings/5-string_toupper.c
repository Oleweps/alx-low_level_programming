#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * str: parameter function
 * Return: str
 */

char *string_toupper(char *str)
{
	if (str == NULL)
		return (NULL);

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
