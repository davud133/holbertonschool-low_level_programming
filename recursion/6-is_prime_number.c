#include "main.h"
/**
 * check - checks prime
 * @i: number 1
 * @n: number 2
 *
 * Return: integer
 */
int check(int i, int n)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (check(i + 1, n));
	return (0);
}
/**
 * is_prime_number - check if a number is prime
 * @n: number
 *
 * Retur: integer
 */
int is_prime_number(int n)
{
	return (check(2,n));
}
