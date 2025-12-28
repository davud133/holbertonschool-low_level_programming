#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a memory space for 2D grid
 * @width: width of 2d grid
 * @height: height of 2d grid
 *
 * Return: pointer to pointers of int array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
