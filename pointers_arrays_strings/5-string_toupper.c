#include "main.h"
/**
 * string_toupper - makes all lowercases to uppercases
 * @str: string
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
