#inlcude "main.h"
/**
 * _puts_recursion - it is recursive version of puts
 * @s: string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_puthcar(s[0]);
		char *k;
		int i;
		for (i = 1; s[i] != '\0'; i++)
		{
			k[i - 1] = s[i];
		}
		return 	_puts_recursion(k);
	}
}
