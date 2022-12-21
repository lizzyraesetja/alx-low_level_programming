#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *rev_string - function that reverses a string
 * @s: input the string
 * Return: void
 *
 */

void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		s[j] = temp;
		temp = s[k];
		s[k] = s[j];
		k++;
	}
}
