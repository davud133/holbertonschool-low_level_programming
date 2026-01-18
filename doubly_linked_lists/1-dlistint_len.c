#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * dlistint_len - print list of doubly linked list
 * @h: head;
 *
 * Return: len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	if (h->prev != NULL)
	{
		tmp = h->prev;
		while (tmp->prev != NULL)
		{
			tmp = tmp->prev;
		}
	}
	else
	{
		if (h->next != NULL)
		{
			tmp = h->next->prev;
		}
		else
		{
			return (1);
		}
		while (tmp != NULL)
		{
			len++;
			tmp = tmp->next;
		}
	}
	return (len);
}
