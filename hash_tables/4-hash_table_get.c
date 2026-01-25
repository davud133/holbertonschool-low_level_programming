#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get- return the value asssosicated with the key
 * @ht: table
 * @key: key
 *
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (key == NULL)
		return ("(null)");
	tmp = ht->array[hash_djb2((unsigned char *)key) % ht->size];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return ("(null)");
}
