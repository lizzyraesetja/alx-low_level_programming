#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input numbers
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int x, u;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (u = 1; u <= x; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
