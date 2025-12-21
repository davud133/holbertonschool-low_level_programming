#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: the number of arguments
 * @argv: arguments
 *
 * Description: s positivie numbers
 *
 * Return: nothing
 */
int main(int argc, char*argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum+= atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
