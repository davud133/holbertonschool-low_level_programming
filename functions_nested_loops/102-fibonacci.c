#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints first 50 fibonachi numbers
 *
 * Return: 0 on success 1 on failure
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int n3;
	int i = 0;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%ld, ", n1);
		else
			printf("%ld", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
