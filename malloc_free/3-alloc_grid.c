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
	if (width < 1 || height < 1)
		return (NULL);
	int **array = malloc(height * sizeof(*int));
	int i;

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}
	return (array);
}
