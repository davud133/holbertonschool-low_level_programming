#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to head of the list
 * @idx: index where to insert
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure / out-of-range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		if (idx != 0)
		{
			free(new_node); 
			return (NULL);
		}
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
    	if (idx == 0)
	{
		new_node->next = *h;
        	new_node->prev = NULL;
        	(*h)->prev = new_node;
        	*h = new_node;
        	return (new_node);
    	}
	tmp = *h;
	for (i = 0; i < idx - 1 && tmp->next != NULL; i++)
        	tmp = tmp->next;
	if (tmp->next == NULL && i == idx - 1)
    	{
        	tmp->next = new_node;
        	new_node->prev = tmp;
        	new_node->next = NULL;
    	}
    	else if (i < idx - 1)
    	{
        	free(new_node);
        	return (NULL);
    	}
    	else
    	{
        	new_node->next = tmp->next;
        	new_node->prev = tmp;
       		tmp->next->prev = new_node;
        	tmp->next = new_node;
    	}
    return (new_node);
}

