#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  *op_add - returns the sum of two integers
  *@a: first element
  *@b: second number
  *Return: sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - difference of two numbers
  *@a: first element
  *@b: second number
  *Return: difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - prints product of two numbers
  *@a: first element
  *@b: second number
  *Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - returns the division of two numbers
  *@a: first element
  *@b: second number
  *Return: qoutient of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - prints remainder of two numbers
  *@a: first element
  *@b: second number
  *Return: the remainder integer
  */

int op_mod(int a, int b)
{
	return (a % b);
}
