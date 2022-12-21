#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts_half - function that prints half of a string
 *
 * @str: this input string
 */

void puts_half(char *str)
{
	int l, half;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	half = l / 2;

	if (l % 2 == 1)
	{
		half++;
	}
	while (half < l)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
