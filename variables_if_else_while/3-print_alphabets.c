#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'A program that prints "Hello, Betty!" to the console.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (1);
}
