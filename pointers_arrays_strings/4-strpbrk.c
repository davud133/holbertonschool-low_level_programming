#include "main.h"
/**
 * _strpbrk - search string for a set of characther
 * @s: string
 * @accept: accepted characther
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *f = NULL;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				f = &s[i];
				break;
			}
		}
		if (f != NULL)
			break;
	}
	return (f);
}
