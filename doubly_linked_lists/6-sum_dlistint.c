#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * sum_dlistint - sums every nodes'value
 * @head: head node;
 *
 * Return: nothing
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum+= head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
