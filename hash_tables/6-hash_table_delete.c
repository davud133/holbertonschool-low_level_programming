#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp2;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			tmp2 = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = tmp2;
		}
	}
	free(ht->array);
	free(ht);
}
