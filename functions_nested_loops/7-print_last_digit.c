#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the var that will be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
