#include "main.h"
/**
 * _islower - checks if the char is lower characther
 *
 * Return: int
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
