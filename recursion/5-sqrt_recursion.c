#include "main.h"
/**
 * _sqrt_recursion - gives sqrt of a number
 * @n:  number
 *
 * Return: integer
 */
int mult(int i, int n);

int _sqrt_recursion(int n)
{
	return (mult(0, n));
}

int mult(int i, int n)
{
	if (i * i != n)
		return (mult(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}
