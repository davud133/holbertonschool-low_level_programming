#include "main.h"
/**
 * _strnspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
		if (k == 0)
			break;
	}
	return (k);
}
