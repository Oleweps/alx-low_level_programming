#include "main.h"

/**
  *more_numbers - print numbers from 0 to 14 ten times
  *Description - You can only use _putchar three times in your code
  *
  * Return: 10 times the number since 0 to 14
  */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
