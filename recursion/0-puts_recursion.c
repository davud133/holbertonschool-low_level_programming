#include "main.h"
/**
 * _puts_recursion - it is recursive version of puts
 * @s: string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char *k;
	int i;
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		for (i = 1; s[i] != '\0'; i++)
		{
			k[i - 1] = s[i];
		}
		_puts_recursion(k);
	}
}
