#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - frees the list of nodes
 * @head: start point
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		list_t *next = head->next;
		list_t *tmp;
		while (next != NULL)
		{
			tmp = next;
			next = tmp->next;
			free(tmp->str);
			free(tmp);
		}
		free(head);
	}
}
		
