#include "main.h"
/**
 * times_table - prints time tbale till 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j * i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

