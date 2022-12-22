#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int x = 0, d_len = 0;

	while (dest[x++])
		d_len++;

	for (x = 0; src[x]; x++)
		dest[d_len++] = src[x];

	return (dest);
}
