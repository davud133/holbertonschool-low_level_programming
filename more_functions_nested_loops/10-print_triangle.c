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
	for (i = 1; i < size; i++)
	{
		for ( j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
