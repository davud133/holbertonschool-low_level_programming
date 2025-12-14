#include "main.h"
/**
 * _strncat - adds n characther from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of ch
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;
	int lens = 0;
	int lend = 0;

	for (i = 0 ; src[i] != '\0'; i++)
		lens++;
	for (i = 0 ; dest[i] != '\0'; i++)
		lend++;
	for (i = 0; i < n; i++)
	{
		if (i > lens)
			break;
		dest[lend+i] = src[i];
	}
	return (dest);
}


