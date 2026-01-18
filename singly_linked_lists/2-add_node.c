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
	list_t new_node;
	list_t = malloc(size_of(list_t));
	new_node->str = strdup(str);
	int i;
	for (i = 0 ; str[i] != '\0'; i++)
	{}
	new_node->len = i;
	*head->next = &new_node;
}
