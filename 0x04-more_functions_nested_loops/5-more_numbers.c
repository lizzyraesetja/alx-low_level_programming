#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * _putchar only 3 times
 * Return: 0 to 14 times
 */

void more_numbers(void)
{
	int i, y;

	for (y = 0; y <= 10; y++)
	{
		for (i = 0; i <= 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
				_putchar((i % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
