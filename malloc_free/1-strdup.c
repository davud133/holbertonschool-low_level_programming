#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string to a fresh memory
 * @str: string
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(strlen(str) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
