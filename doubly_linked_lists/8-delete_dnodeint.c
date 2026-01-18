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
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = NULL;
			return (1);
		}
		tmp->next->prev = NULL;
		(*head)->next = tmp->next;
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
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
