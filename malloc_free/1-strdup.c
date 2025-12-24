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
	int k;

	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++);
	dup = (char *)malloc((k + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
