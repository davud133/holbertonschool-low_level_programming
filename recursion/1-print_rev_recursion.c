#include "main.h"
/**
 * _print_rev_recursion - prints string reversed
 * @s: string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *k = &s[0];
	if (k[0] == '\0');
	else
	{
		_print_rev_recursion(k[1]);
		_putchar(k[0]);
	}
}
