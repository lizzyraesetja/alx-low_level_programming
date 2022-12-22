#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: Append the string
 * @src: string to be concebtrated
 * Return: Returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, dest_len = 0;

	while (dest[x++])
		dest_len++;

	for (x = 0; src[x]; x++)
		dest[dest_len++] = src[x];
	return (dest);
}

