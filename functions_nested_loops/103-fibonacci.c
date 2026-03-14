#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the sum of the even-valued fibonacci terms
 *
 * Return: 0 on success 1 on failure
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int n3;
	unsigned long int sum;
	while (n1 + n2 < 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0)
			sum += n3;
	}
	printf("%ld\n", sum);
	return (0);
}
