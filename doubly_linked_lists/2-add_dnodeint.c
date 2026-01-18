#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * add_dnodeint - adds node to  doubly linked list
 * @head: head node;
 * @n: value of that node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = *head;
	new_node->next = *head->next;
	*head->next = &new_node;
	return (new_node);
}
