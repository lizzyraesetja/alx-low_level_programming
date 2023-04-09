#include "hash_tables.h"

/**
 * key_index - gives the index key
 * @key: is the key
 * @size: the size of the array of the hash table
 *
 * Return: index number for the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
