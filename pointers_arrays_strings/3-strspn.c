#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
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
	int t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		t = k;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
		if (t == k)
			break;
	}
	return (k);
}
