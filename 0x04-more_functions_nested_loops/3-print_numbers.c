#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: 0-9 followed by newline
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}