#include "main.h"
/**
 * _strcat - it appends one string to another
 * @dest: first string
 * @src: second string
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int last_index = 0;
	int i;
	int k = 0;
	while (dest[last_index] != '\0')
		last_index++;
	for (i = last_index; src[k] != '\0' ; i++)
	{
		dest[i] = src[k];
		k++;
	}
	dest[last_index + k] = '\0';
	return (dest);
}


