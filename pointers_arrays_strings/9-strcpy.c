#include "main.h"
/**
 * _strcpy - copies str
 * @dest: destination
 * @src: source
 *
 * Return: pointer value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

