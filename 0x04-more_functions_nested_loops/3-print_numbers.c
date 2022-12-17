#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: 0-9 followed by newline
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
