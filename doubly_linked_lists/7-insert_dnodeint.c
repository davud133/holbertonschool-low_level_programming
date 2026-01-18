#include "lists.h"
#include <stdlib.h>

/**
 * insert_start - inserts a new node at the beginning of a doubly linked list
 * @h: pointer to the head of the list
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_start(dlistint_t **h, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *h;

	if (*h)
		(*h)->prev = new_node;

	*h = new_node;

	return (new_node);
}

/**
 * insert_end - inserts a new node at the end of a doubly linked list
 * @tail: pointer to the last node of the list
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_end(dlistint_t *tail, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = tail;
	new_node->next = NULL;
	tail->next = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a node at a given index in a doubly linked list
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added (0-based)
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0 || !*h)
		return (insert_start(h, n));

	for (i = 0; i < idx - 1 && tmp->next; i++)
		tmp = tmp->next;

	if (!tmp->next && i == idx - 1)
		return (insert_end(tmp, n));

	if (i < idx - 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}

