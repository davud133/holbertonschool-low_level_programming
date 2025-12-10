#include "main.h"
/**
 * _atoi - it changes string to int
 * @str: the string
 *
 * Return: integer
 */
int _atoi(char *str)
{
	int int_count = 0;
	int i;
	unsigned int n = 0;
	int pow = 1;
	int k;
	int is_positive = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			int_count++;
		else if (str[i] == '-')
			is_positive *= -1;
		else
		{
			if (int_count > 0)
				break;
		}
	}
	int_count--;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			for (k = 0; k < int_count; k++)
				pow*=10;
			n+= (str[i] - '0') * pow;
			int_count--;
			pow = 1;
		}
		else 
		{
			if (int_count < 0)
				break;
		}
	}
	return (n*is_positive);

}
