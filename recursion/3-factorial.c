#include "main.h"
/**
 * factorial - find factorial of given number
 * @n: the number
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
