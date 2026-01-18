#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_dlistint - frees doubly linked list
 * @head: head node;
 * 
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}

