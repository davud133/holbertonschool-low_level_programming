#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* Deleting the first node */
	if (index == 0)
	{
		*head = tmp->next;          /* update head */
		if (tmp->next != NULL)
			tmp->next->prev = NULL; /* update new first node's prev */
		free(tmp);
		return (1);
	}

	/* Traverse to the node at the given index */
	for (i = 0; i < index; i++)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
			return (-1); /* index out of range */
	}

	/* Update pointers of neighboring nodes */
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}

