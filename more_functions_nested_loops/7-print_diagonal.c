#include "main.h"
/**
 * print_diagonal - prints n numbers of '\' with an endline
 * @n: numbers of '\'
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		while (i > 0)
		{
			i--;
			_putchar(' ');
		n--;
		j++;
		i = j;
	}
	_putchar('\n');
}
