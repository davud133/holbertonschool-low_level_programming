#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes
 * @head: head node;
 * @index: index
 *
 * Return: nothing
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0 ; i < index; i++)
		{
			if (tmp->next != NULL)
				tmp = tmp->next;
			else
				return (-1);
		}
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
