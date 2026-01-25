#include "main.h"
/**
 * write_file - writes to a file
 * @fdt: file to
 * @fdf: file from
 * @r: readen
 * @w: written
 * @argv1: ar1
 * @argv2: ar2
 *
 * Return: nothing
 */
void write_file(int fdt, int fdf, ssize_t r, ssize_t w, char *ar1, char *ar2)
{
	int i;
	ssize_t written = 0;
	char *str = malloc(1024);

	if (str == NULL)
		exit(-1);
	do {
		r = read(fdf, str, 1024);
		if (r == -1)
		{
			write(2, "Error: Can't read from file ", 28);
			for (i = 0; ar1[i] != '\0'; i++)
			{
				write(2, &ar1[i], 1);
			}
			write(2, "\n", 1);
			exit(98);
		}
		if (r == 0)
			break;
		while (written < r)
		{
			w = write(fdt, str + written, r - written);
			if (w == -1)
			{
				write(2, "Error: Can't write to ", 22);
				for (i = 0; ar2[i] != '\0'; i++)
				{
					write(2, &ar2[i], 1);
				}
				write(2, "\n", 1);
				exit(99);
			}
			written += w;
		}
		written = 0;
	} while (1);
	free(str);
}
/**
 * check_close - checks if file closed
 * @fdf: file from
 * @fdt: file to
 *
 * Return: nothing
 */
void check_close(int fdf, int fdt)
{
	if (close(fdf) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
}
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Description: copies file to another
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int fdt;
	int fdf;
	int i;
	ssize_t r, w;

	r = 0;
	w = 0;
	if (argc < 3 || argc > 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		return (97);
	}
	fdt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", 28);
		for (i = 0; argv[1][i] != '\0'; i++)
		{
			write(STDERR_FILENO, &argv[1][i], 1);
		}
		write(STDERR_FILENO, "\n", 1);
		return (98);
	}
	if (fdt == -1)
	{
		write(2, "Error: Can't write to ", 22);
		for (i = 0; argv[2][i] != '\0'; i++)
		{
			write(2, &argv[2][i], 1);
		}
		write(2, "\n", 1);
		return (99);
	}
	write_file(fdt, fdf, r, w, argv[1], argv[2]);
	check_close(fdf, fdt);
	return (0);
}
