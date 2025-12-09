#include "main.h"
/**
 * swap_int - it swaps the values of 2 integers
 * @a: var 1
 * @b: var 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
