#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t) * 1024);
	if (new_hash_table->array == NULL)
		return (NULL);
	return (new_hash_table);
}
