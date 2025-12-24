#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenas 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int k;
	int t;
	char *cat;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	cat = (char *)malloc((k + i + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	for (t = 0; t < i; t++)
		cat[t] = s1[t];
	for (t = i; t < i + k + 1; t++)
	       cat[t] = s2[t - i];
	return (cat);
}
