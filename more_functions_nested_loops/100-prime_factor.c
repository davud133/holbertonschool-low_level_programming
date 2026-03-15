#include <stdio.h>
#include <math.h>
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
	unsigned long int i;
	unsigned long int n = 612852475143UL;

	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			if (_is_prime(i))
			{
				n = n / i;
				i = 2;
			}
	}
	printf("%lu\n", n);
	return (0);
}
int _is_prime(unsigned long int n)
{
	unsigned long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
