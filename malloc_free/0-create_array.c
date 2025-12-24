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
	if (size == 0)
		return (NULL);
	char *arr = (char*)malloc(size * sizeof(char));
	int i;
	
	if (arr = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
