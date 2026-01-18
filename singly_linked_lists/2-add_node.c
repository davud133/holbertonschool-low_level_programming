#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - adds node to the head of the list
 * @head: starting point of list
 * @str: string of that node
 *
 * Return: address of that node if not NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (i = 0 ; str[i] != '\0'; i++)
	{}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
