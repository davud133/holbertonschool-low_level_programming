#include "main.h"
/**
 * _isupper - checking if characther is uppercase
 * @c: the characther that will be checked
 *
 * Return: 1 if upper else 0
 */
int  _isupper(char c)
{
	if (c >= 65 && c<= 90)
		return (1);
	return (0);
}
