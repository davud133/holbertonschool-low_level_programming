#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int size = 0;
	int i;
	while (str[size] != '\0')
		size++;
	if (size % 2 == 1)
		i = (size + 1) / 2;
	else
		i = size / 2;
	for (; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
