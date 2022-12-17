#include "main.h"
/**
 * print_triangle - function that print triangle
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (x = 0; x <= (size - 1); x++)
			{
				_putchar(' ');
			}
			for (y = 0; y <= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
