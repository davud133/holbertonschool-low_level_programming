#include "lists.h"
#include <stddef.h>
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
			printf("%s", h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		h = h->next;
		n++;
	}
	return n;
}

