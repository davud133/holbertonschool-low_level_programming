#include "main.h"
/**
 * _puts - it prints the string into stdout
 * @str: the string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
		
