#include "main.h"
#include <stddef.h>
/**
 * _strchr - gives address of an characther in a string
 * @s: string
 * @c: characther
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *f = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}
	}
	if (c == '\0')
	{
		f = &s[i];
	}
	return (f);
}
