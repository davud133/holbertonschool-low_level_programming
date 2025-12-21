#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 * @argc: the number of arguments
 * @argv: arguments
 *
 * Description: s positivie numbers
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;
	int k;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);

			}
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
