#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: the number of arguments
 * @argv: arguments
 *
 * Description: prints mul of 2 number
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
