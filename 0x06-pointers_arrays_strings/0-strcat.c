#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: Returns a pointer to the resulting string
 * @src: append string to the dest string
 *
 * Return: a pointer to destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int op = 0, dest_len = 0;

	while (dest[op])
	{
		dest_len++;
	}
	for (op = 0; src[op]; op++)
	{
		dest[dest_len] = src[op];
	}
	return (dest)
}
