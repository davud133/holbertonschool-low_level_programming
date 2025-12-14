#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a sub string
 * @haystack: string
 * @needle: sub
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	int l;
	int t = 0;
	char *f = NULL;
	int len = 0;
	for (len = 0; needle[len] != '\0'; len++);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i; haystack[k] != '\0'; k++)
		{
			t = 1;
			for(l = 0; needle[l] != '\0'; l++)
			{
				if (haystack[k] == needle[l])
					continue;
				else
				{
					t = 0;
					break;
				}
			}
			if (t == 1)
			{
				f = &haystack[i];
				return (f)
			}
		}
	}
	return (f);
}
				
