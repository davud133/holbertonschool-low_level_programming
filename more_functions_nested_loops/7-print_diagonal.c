#include "main.h"
/**
 * print_diagonal - prints n numbers of '\' with an endline
 * @n: numbers of '\'
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	while (n>0)
	{
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
