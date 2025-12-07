#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a new task
 *
 * Return: nothing
 */
int _is_prime(int n);
int main(void)
{
	long long biggest = 0;
	long long i;
	long long n = 612852475143LL / 2 + 1;
	for (i = 1; i < n; i++)
	{
		if ( n % i == 0)
			if (_is_prime(i))
				biggest = i;
	}
	printf("%lld\n", biggest);
}
int _is_prime(long long n)
{
	long long i;
	for (i = 2; i < n / 2 + 1; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
