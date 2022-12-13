#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 * Return: program should return 0
 */

int main(void)
{
	char *l = "main";

	while (*l)
	{
		_putchar(*l);
		l++;
	}
	_putchar('\n');

	return (0);
}
