#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{
		_putchar(u);
	}
	_putchar('\n');
}
