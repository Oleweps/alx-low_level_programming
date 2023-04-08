#include "main.h"
#include <stdio.h>

/**
  *main - prints the name of the program
  *@argc: number of arguments passed to main function
  *@argv: string parameter
  *Return: always 0 if success and 1 otherwise
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
