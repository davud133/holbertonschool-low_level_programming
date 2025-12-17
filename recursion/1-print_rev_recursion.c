#include "main.h"
/**
 * _print_rev_recursion - prints string reversed
 * @s: string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *k = &s[1];
	if (k[-1] == '\0');
	else
	{
		_print_rev_recursion(k);
		_putchar(k[-1]);
	}
}
