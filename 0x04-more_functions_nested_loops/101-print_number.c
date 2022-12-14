#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */

void print_number(int n)
{
	unsigned int m, v, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	v = m;
	count = 1;

	while (v > 9)
	{
		v /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
