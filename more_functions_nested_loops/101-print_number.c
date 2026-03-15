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
		_putchar('-');
	while (n > 0)
	{
		_putchar(n % 10 + '0');
		n = n / 10;
	}
}
