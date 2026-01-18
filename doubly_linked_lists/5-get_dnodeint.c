#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - gives the node at specific index
 * @head: head node;
 * @index: index 
 *
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head->next != NULL)
				head = head->next;
			else
				return(NULL);
		}
		return (head);
	}
	else
		return (NULL);
}
