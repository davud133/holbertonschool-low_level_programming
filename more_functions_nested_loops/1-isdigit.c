#include "main.h"
/**
 * _isdigit - checks if the character is digit
 * @c: variable that will be checked
 *
 * Return:1 if it is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
