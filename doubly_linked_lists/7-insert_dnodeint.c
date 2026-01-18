#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts node to given indez
 * @h: head node;
 * @idx: index
 * @n: value of that node
 *
 * Return: nothing
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	tmp = *h;
	if (idx == 0)
	{
		tmp->prev = new_node;
		new_node->prev = NULL;
		new_node->next = tmp;
		*h = new_node;
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (tmp->next != NULL)
				tmp = tmp->next;
			else
				return (NULL);
		}
		tmp->prev->next = new_node;
		new_node->prev = tmp->prev;
		tmp->prev = new_node;
		new_node->next = tmp;
	}	
	return (new_node);
}
