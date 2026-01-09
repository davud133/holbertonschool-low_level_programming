#include "variadic_functions.h"
/**
 * sum_them_all - sums the values entered from command line
 * @n: number of values
 * @...: arguments
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list arg;
	int sum = 0;
	int i;

	va_start(arg, n);
	for (i = 0 ; i < n)
	{
		sum += va_arg(arg, int);
	}
	return (sum);
}
