#include "main.h"
/**
 * _strcmp - compares 2 string
 * @s1: string 1
 * @s2: sring 2
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
