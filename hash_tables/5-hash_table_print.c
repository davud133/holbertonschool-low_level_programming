#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - print hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int printed = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL) 
		{
			if (tmp->key != NULL)
			{
				if (printed == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				printed = 1;
			}
			tmp = tmp->next;
		}
	
	}
	printf("}\n");
}
