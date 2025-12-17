#include "main.h"
/**
 * _puts_recursion - it is recursive version of puts
 * @s: string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char *k = &s[0];
	if (k[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(k[0]);
		_puts_recursion(k);
	}
}
