#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_times_table - prints 'n' times table
 * @n: dimension of table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int k;
	if (n > -1 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (k = 0; k < n + 1; k++)
			{
				if (k != n)
					printf("%d, ", i * k);
				else
					printf("%d\n", i * k);
			}
		}
	}
}
