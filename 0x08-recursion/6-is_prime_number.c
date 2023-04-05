#include "main.h"

int actual_prime(int n, int i);

/**
  *is_prime_number - determines if n is prime number or not
  *@n: number to evaluate
  *Return: 1 if n is prime number, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  *actual_prime - recursively calculates if the number is prime
  *@n: number to evaluate
  *@i: iterator
  *Return: 1 if the number is prime or 0 if not
  */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}