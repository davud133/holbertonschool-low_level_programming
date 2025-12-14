#include "main.h"
/**
 * _strncpy - copies n number of characther from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int lens = 0;
	int lend = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		lens++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		lend++;
	}
	for (i = 0; i < n; i++)
	{
		if (i > lend)
		{
			break;
		}
		if (i > lens)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
