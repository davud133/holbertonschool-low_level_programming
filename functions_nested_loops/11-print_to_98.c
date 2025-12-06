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

	if (n > 98)
	{
		for (i = n; n > 97; n--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; n < 99; n++)
			printf("%d, ", i);
	}
}
