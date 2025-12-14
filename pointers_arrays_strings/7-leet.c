#include "main.h"
/**
 * leet - encodes message
 * @str: string
 *
 * Return: char
 */
char *leet(char *str)
{
	int i;
	char arr[10] = "aAeEoOtTlL";
	char arr2[10] = "4433007711";
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (str[i] == arr[k])
				str[i] = arr2[k];
		}
	}
	return (str);
}
