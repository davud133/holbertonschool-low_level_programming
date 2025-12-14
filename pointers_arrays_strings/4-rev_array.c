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
		k = a[n - i];
		a[n - i] = a[i];
		a[i] = k;
	}
}	

