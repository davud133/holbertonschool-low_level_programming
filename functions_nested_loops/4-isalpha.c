#include "main.h"
/**
 * _isalpha - checks if a characther is an alphabet characther
 * @c: the characther to check
 *
 * Return: 1 if it is true 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
