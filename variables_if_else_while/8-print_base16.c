#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'a task'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
