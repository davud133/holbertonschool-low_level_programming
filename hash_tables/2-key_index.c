#include "hash_tables.h"
/**
 * key_index - gives an inde based on the key
 * @key: key
 * @size: size of the array;
 *
 * Return: integer index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (-1);
	if (size == 0) 
		return (-1);
	return (hash_djb2(key) % size);
}
