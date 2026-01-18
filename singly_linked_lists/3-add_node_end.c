#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds node to the end of the list
 * @head: head of that list
 * @str: str value of new node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tail;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	for (i = 0 ; str[i] != '\0'; i++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	tail->next = new_node;
	return (new_node);
}
