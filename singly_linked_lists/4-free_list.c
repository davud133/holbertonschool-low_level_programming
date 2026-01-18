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
	list_t *next = head->next;
	list_t *tmp;	

	if (head != NULL)
	{
		while (next != NULL)
		{
			tmp = next;
			next = tmp->next;
			free(tmp->str);
			free(tmp);
		}
		free(head->str);
		free(head);
	}
}
