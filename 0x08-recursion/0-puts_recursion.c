#include "main.h"

/**
  *_puts_recursion - function parameter which calls itself
  *@s: string parameter
  *Return: 0 always if successful
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
