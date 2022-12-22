#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: Append string
 * @src: concentrated string
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int y = 0, dest_len = 0;

	while (dest[y++])
		dest_len++;

	for (y = 0; src[y]; y++)
		dest[dest_len++] = src[y];

	return (dest);
}

