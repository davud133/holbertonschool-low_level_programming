#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptiion: 'a task'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
