#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input numbers
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
