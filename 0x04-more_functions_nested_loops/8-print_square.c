#include "main.h"

/**
 * print_square - prints a square
 * @size: size of both width and length
 * Return: square made of '#'
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		_putchar('#');
	}
	for (y = 2; y <= size; y++)
	{
		_putchar('#');
	}
	_putchar('\n');
}

