#include "main.h"
/**
 * Helper - prints the number
 * @n: int n
 *
 * Return: nothing
 */
void  Helper(int n)
{
	int i;
	int num[4] = {-1, -1, -1, -2};
	char l;
	for (i = 0; n > 0; i++)
	{
		num[i] = n % 10;
		n = n / 10;
	}
	for (i = i - 1; i > -1; i--)
	{
		l = num[i] + '0';
		write(1, &l, 1);
	}
}

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
				{
					Helper(i * k);
					write(1, ',', 1);
					write(1, ' ', 1);
				}
				else
					Helper(i * k);
			}
		}
	}
}
