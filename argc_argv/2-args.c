#include <stdio.h>
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Description: prints every arguments passed into
 *
 * Return: nothing
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
