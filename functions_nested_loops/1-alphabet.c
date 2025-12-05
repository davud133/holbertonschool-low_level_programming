#include "main.h"
/**
 * main - Entry Point
 *
 * Description: 'a task'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void _putchar(char c)
{
	write(1,c,1);
}
void print_alphabet()
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}
