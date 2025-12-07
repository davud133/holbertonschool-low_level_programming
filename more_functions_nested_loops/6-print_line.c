#include "main.h"
/**
 * print_line - it prints n number of '-'
 * @n: n is the count
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
