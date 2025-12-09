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

	while (str[last_index] != '\0')
		last_index++;
	last_index--;
	for (i = 0; i < last_index / 2; i++)
	{
		k = str[last_index];
		str[last_index] = str[i];
		str[i] = k;
		last_index--;
	}
}	
