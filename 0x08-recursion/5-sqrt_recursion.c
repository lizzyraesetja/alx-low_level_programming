#include "main.h"
#include <unistd.h>
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - no loop, 1. 2nd function
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt(n, (n + 1) / 2));
}
