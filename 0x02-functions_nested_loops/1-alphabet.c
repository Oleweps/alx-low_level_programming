#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: void.
 */

void print_alphabet(void)
{
	char c;
	for(c='a'; c<='z'; c++)
	{
		_putchar(c);
	}	
	_putchar('\n');
}	

