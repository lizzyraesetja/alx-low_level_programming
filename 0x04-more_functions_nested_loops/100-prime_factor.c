#include <stdio.h>
#include <unistd.h>

/**
 * main - print largest prime factors
 * Return: Always 0
 */

int main(void)
{
	long int ze, lo;
	ze = 612852475143;

	for ( lo = 2; lo <= ze; lo++)
	{
		if (ze % lo == 0)
		{
			ze /= lo;
			lo--;
		}
	}
	printf("%ld\n", lo);
	return (0);
}
