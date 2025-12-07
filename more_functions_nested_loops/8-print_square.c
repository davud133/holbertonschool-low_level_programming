#include "main.h"
/**
 * print_square - it prints square by given size
 * @size: size of the queare
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('#');
		}
	}
}
