#include "main.h"
/**
 * _strlen_recursion - gives length of a string
 * @s: string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	char *k = &s[1];
	int i;

	if (s[0] == '\0')
		return (0);
	if (k[0] != '\0')
		i = _strlen_recursion(k) + 1;
	else
		i = 1;
	return (i);
}
