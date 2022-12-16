#include "main.h"
#include <stdio.h>

/**
 * print_mosts_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0-9 except 2 and 4
 */

void print_mosts_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
