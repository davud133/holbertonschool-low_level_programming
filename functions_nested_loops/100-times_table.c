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

	for (i = 0; n > 0; i++)
	{
		num[i] = n % 10;
		n = n / 10;
	}
	for (i = 0; num[i] != -2; i++)
		write(1, num[i] + '0', 1);
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
					Helper(i * k);
					write(1, ",", 1);
					write(1, " ", 1);
				else
					Helper(i * k);
			}
		}
	}
}
