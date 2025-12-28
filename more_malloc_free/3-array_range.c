#include "main.h"
#include <stdlib.h>
/**
 * array_range - it creates an array
 * @min: start point
 * @max: end point
 *
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int *array;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) *( max - min + 2));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < (max - min + 2); i++)
		array[i] = min + i;
	return (array);
}
