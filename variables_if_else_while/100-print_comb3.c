#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all combo of 2 digits
 *
 * Return: nothing;
 */
int main(void)
{
	int a = 0;
	int b = 1;

	while (a != 9)
	{
		while (b != 10)
		{
			if (a != 0 || b != 1)
				putchar(' ');
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
				putchar(',');
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
