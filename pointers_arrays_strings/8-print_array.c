#include "main.h"
#include <stdio.h>
/**
 * print_array - it prints array's n elements
 * @a: array
 * @n; number
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
}
