#include "main.h"
/**
 * print_triangle - function that print triangle
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 1; x <= (size - 1); x++)
		{
			_putchar(' ');
		}
		for (x--; x < size; x++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
