#include "main.h"
/**
 * print_rev - it prints the string in reverse order
 * @str: the string
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int last_index = 0;

	while (str[last_index] != '\0')
	{
		last_index++;
	}
	last_index--;
	while (last_index > 0)
	{
		_putchar(str[last_index]);
		last_index--;
	}
}
