#include "main.h"
/**
 * cap_string - capitalizez all words first characther
 * @str: string
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i;
	int k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != ',' && str[i] != ';' && str[i] != '.' && str[i] != '!' && str[i] != '?' && str[i] != '"' && str[i] != '(' && str[i] != ')' && str[i] != '{' && str[i] != '}')
		{
			if (k == 0 && str[i] >= 97)
			{
				str[i] = str[i] - 32;
				k = 1;
			}
		}
		else
		{
			k = 0;
		}
	}
	return (str);
}
