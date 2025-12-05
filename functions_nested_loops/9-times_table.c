#include "main.h"
/**
 * times_table - prints time tbale till 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j * i > 9)
			{
				_putchar((j * i) / 10 + '0');
				_putchar((j * i) % 10 + '0');
			}
			else
			{
				_putchar(j * i + '0');
			}
			if ( j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
					_putchar(' ');
		
			}
		}
		_putchar('\n');
	}
}
