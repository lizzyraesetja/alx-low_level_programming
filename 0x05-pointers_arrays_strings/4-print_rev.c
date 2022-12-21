#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: this input the string
 *
 */

void print_rev(char *s)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
		;
	for (p = p - 1; s[p] != '\0'; p--)
		putchar(s[p]);
	putchar('\n');
}
