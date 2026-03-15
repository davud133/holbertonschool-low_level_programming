#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a new task
 *
 * Return: nothing
 */
int _is_prime(unsigned long int n);
int main(void)
{
	unsigned long int biggest = 0;
	unsigned long int i;
	unsigned long int n = 612852475143 / 2 + 1;
	for (i = 1; i < n; i++)
	{
		if ( n % i == 0)
			if (_is_prime(i))
				biggest = i;
	}
	printf("%lud\n", biggest);
	return (0);
}
int _is_prime(unsigned long int n)
{
	unsigned long int i;
	for (i = 2; i < n / 2 + 1; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
