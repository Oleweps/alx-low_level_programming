#include <stdio.h>

/**
  *main - prints a fizz buzz program
  *Description:  multiples of three print Fizz instead of the number
  *for the multiples of five print Buzz
  *
  * Return: 0
  */

int main(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
