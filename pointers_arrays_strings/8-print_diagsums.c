#include "main.h"
/**
 * print_diagsums - prints diagsums
 * @a: diagsum
 * @size: size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
			_putchar(a[i][k]);
		_putchar('\n');
	}
}
