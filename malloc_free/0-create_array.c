#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates array with given size
 * @size: size of arr
 * @c: characther it will be filled
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char*)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
