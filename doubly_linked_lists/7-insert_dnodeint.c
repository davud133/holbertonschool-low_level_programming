#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_at_start - inserts a node at the beginning of a doubly linked list
 * @h: pointer to head
 * @new_node: new node to insert
 *
 * Return: address of new_node
 */
dlistint_t *insert_at_start(dlistint_t **h, dlistint_t *new_node)
{
	new_node->prev = NULL;
	new_node->next = *h;
	(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}

/**
 * insert_at_end - inserts a node at the end of a doubly linked list
 * @tmp: current last node
 * @new_node: node to insert
 *
 * Return: address of new_node
 */
dlistint_t *insert_at_end(dlistint_t *tmp, dlistint_t *new_node)
{
	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to head of the list
 * @idx: index to insert at
 * @n: value of the new node
 *
 * Return: address of new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
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
		return (insert_at_start(h, new_node));

	tmp = *h;
	for (i = 0; i < idx - 1 && tmp->next != NULL; i++)
		tmp = tmp->next;

	if (tmp->next == NULL && i == idx - 1)
		return (insert_at_end(tmp, new_node));
	else if (i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}

