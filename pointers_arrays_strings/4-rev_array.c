#include "main.h"
/**
 * reverse_array - it reverses the arrya
 * @a: array
 * @n: number of elemts
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int *b;

	for (i = n-1; i > -1; i--)
	{
		b[-n+i] = a[i];
	}
	for (i = 0; i < n / 2; i++)
	{
		a[i] = b[i];
	}
}	

