#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char
 * @arg: char for printing
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int
 * @arg: int for printing
 *
 * Return: nothing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_str
 * @arg: str for printing
 *
 * Return: nothing
 */
void print_str(va_list arg)
{
	char *s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_float
 * @arg: float for printing
 *
 * Return: nothing
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_all - print 4 types of arguments
 * @format: type of arguments
 * @...: arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int k = 0;
	va_list arg;
	char *sep = "";
	char form[5] = {'c', 'i', 'f', 's', '\0'};
	void (*f[4])(va_list);
	f[0] = print_char;
	f[1] = print_int;
	f[2] = print_float;
	f[3] = print_str;
	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		while(form[k] != '\0')
		{
			if (format[i] == form[k])
			{
				printf("%s", sep);
				f[k](arg);
				sep = ", ";
			}
			k++;
		}
		k = 0;
		i++;
	}
	va_end(arg);
	printf("\n");
}
		
