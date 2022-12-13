#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char x[] = "_putchar";
	int i = 0;

	while (x[i] != '\0')
	{
		_putchar(x[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
