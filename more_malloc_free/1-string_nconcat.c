#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat the string
 * @s1:string 1
 * @s2:string 2
 * @n: number
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i;
	char *k;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0' ; len_s1++)
        {
        }
	for (len_s2 = 0; s2[len_s2] != '\0' ; len_s2++)
        {
        }
	if (n >= len_s2)
	{
		k = malloc(len_s1 + len_s2);
		n = len_s2;
	}
	else
		k = malloc(len_s1 + n);
	for (i = 0; i < len_s1 + n; i++)
	{
		if (i >= len_s1)
			k[i] = s2[i - len_s1];
		else
			k[i] = s1[i];
	}
	k[len_s1 + n + 1] = '\0';
	return (k);
}
