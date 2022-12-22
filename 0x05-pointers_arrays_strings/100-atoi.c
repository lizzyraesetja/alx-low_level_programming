#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int o;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	o = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		{
			o *= -1;
		}
		temp++;
		if (*temp != '\0')
		{
			while (*temp >= '0' && *temp <= '9')
			{
				num = num * 10 + (*temp - '0');
				temp++;
			}
		}

	}
	return (num * o);

}
