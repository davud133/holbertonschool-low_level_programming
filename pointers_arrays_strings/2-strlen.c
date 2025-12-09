#include "main.h"
/**
 * _strlen - it gives the size of string
 * @s: the string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}
