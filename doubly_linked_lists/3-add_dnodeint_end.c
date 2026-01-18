#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds node to  end of doubly linked list
 * @head: head node;
 * @n: value of that node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	new_node->n = n;
	tail = *head;
	if ((*head)->next != NULL)
	{
		tail = (*head)->next;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
	}
	new_node->prev = tail;
	new_node->next = NULL;
	tail = new_node;
	return (new_node);		
}
