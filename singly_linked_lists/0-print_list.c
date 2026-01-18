#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints list of nodes
 * @h: Head node
 * 
 * Return: total number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return n;
}

