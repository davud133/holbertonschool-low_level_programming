#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory adress
 * @src: source memory adress
 * @n: number
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
