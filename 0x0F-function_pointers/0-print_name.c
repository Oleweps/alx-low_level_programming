#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - print name using the pointer to function
  *@f: pointer to function
  *@name: string to add
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
