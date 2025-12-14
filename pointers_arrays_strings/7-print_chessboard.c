#include "main.h"
/**
 * print_chessboard - prints cheastboard
 * @a: board
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; a[i][0] != '\0'; i++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[i][k]);
		}
		_putchar('\n');
	}
}
