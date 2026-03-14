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
	int n1 = 1;
	int n2 = 2;
	int n3;
	int i = 0;
	for (i = 0; i < 50; i++)
	{
		printf("%d,\n", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
}
