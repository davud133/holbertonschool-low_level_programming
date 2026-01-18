#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to head of the list
 * @idx: index where to insert
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure / out-of-range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new_node;
    dlistint_t *tmp;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;

    /* Empty list case */
    if (*h == NULL)
    {
        if (idx != 0)
        {
            free(new_node); /* cannot insert out-of-range */
            return (NULL);
        }
        new_node->prev = NULL;
        new_node->next = NULL;
        *h = new_node;
        return (new_node);
    }

    /* Insert at head */
    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* Walk the list to find insertion point */
    tmp = *h;
    for (i = 0; i < idx - 1 && tmp->next != NULL; i++)
        tmp = tmp->next;

    /* Check if index is exactly at the end (tail) */
    if (tmp->next == NULL && i == idx - 1)
    {
        tmp->next = new_node;
        new_node->prev = tmp;
        new_node->next = NULL;
    }
    else if (i < idx - 1)
    {
        /* Index is out-of-range */
        free(new_node);
        return (NULL);
    }
    else
    {
        /* Insert in the middle */
        new_node->next = tmp->next;
        new_node->prev = tmp;
        tmp->next->prev = new_node;
        tmp->next = new_node;
    }

    return (new_node);
}

