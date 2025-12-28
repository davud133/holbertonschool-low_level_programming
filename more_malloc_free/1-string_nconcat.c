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
	int len_s1;
	int len_s2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0' ; len_s1++)
        {
        }
	for (len_s2 = 0; s1[len_s2] != '\0' ; len_s2++)
        {
        }
	len_s1 += 1;
	if (n >= len_s2)
	{
		s1 = realloc(len_s1 + len_s2);
		n = len_s2;
	}
	else
		s1 = realloc(len_s1 + n);
	if (s1 == NULL)
		return (NULL);
	for (i = len_s1; i < len_s1 + n; i++)
		s1[i] = s2[i - len_s1];
	return (s1);
}
