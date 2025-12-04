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
	
	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
