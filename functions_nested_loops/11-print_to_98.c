#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints every number until 98
 * @n: starts from this number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (i = n; i > 97; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i < 99; i++)
			printf("%d, ", i);
	}
}
