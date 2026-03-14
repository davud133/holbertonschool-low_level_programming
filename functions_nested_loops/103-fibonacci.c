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
	int n1 = 1;
	int n2 = 2;
	int n3 = 0;
	int sum;
	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0)
			sum += n3;
	}
	printf("%d\n", sum);
	return (0);
}
