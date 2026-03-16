#include "main.h"
/**
 * print_number - prints number
 * @n: number
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
