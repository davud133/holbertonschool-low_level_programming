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

	for(i = 97; i < 122; i++)
	{
		putchar(i);
	}
	int j;

	for(j = 65; j < 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (1);
}
