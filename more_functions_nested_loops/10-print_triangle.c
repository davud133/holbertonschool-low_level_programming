#include "main.h"
/**
 * print_triangle - it prints triangle by given size
 * @size:size of triangle
 *
 * Return:  nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i < size + 1; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k > 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
