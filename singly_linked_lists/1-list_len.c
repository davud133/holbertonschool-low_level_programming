#include "lists.h"
#include <stddef.h>
/**
 * list_len - prints out len of llist
 * @h: head node
 *
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
