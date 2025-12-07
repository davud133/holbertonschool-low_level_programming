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

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		j++;
		i = j;
	}
	
}
