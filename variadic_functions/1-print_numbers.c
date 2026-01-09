#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - prints numbers seperated by a char
 * @seperator: seperator string
 * @n: count of numbers;
 * @...: arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0 ; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(arg, int));
		else
			printf("%s%d", seperator, va_arg(arg, int));
	}
	printf("\n");
}
