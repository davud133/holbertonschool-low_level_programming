#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - sets array's index to specific key using djb2 hash function
 * @ht: table
 * @key: key
 * @value: value of the key
 *
 * Return: 1 on succes 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *tmp;
	int key_col = 0;

	index = hash_djb2((unsigned char *)key);
	if (ht == NULL)
		return (0);
	index = index % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				key_col = 1;
				break;
			}
			tmp = tmp->next;
		}
		if (key_col == 0)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
