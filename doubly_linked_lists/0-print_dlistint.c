#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all nodes of doubly linked list
 * @h: head node
 *
 * Return: nothing
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *tmp;

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
		tmp = h->next->prev;
	}
	while(tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}

