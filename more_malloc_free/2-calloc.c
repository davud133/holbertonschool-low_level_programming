#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
 * @nmemb:number of members
 * @size: size of each mem
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	int i;
	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
