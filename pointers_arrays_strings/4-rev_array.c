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
	int k;
	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}	

