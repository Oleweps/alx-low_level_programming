#include "main.h"
#include <stdio.h>

/**
  *main - it prints all the arguments including the first one
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
