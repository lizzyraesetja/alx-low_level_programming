#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: this is destiny
 * @src: this is copia
 *
 * Return: this main copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
