#include "main.h"
/**
 * rev_string - it reverses the string
 * @str: the string
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int last_index = 0;
	int i = 0;
	char k;
	int b;

	while (str[last_index] != '\0')
		last_index++;
	if (last_index > 1)
	{
		last_index--;
		b = last_index;
		for (i = 0; i < b / 2 + 1; i++)
		{
			k = str[last_index];
			str[last_index] = str[i];
			str[i] = k;
			last_index--;
		}
	}
}
