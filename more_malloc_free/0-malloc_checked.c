#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b:integer
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(sizeof(int) * b);
	if (p == NULL)
		return (98);
	return (p);
}
