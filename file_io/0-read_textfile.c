#include "main.h"
/**
 * read_textfile - reads data from a text file
 * @filename: name of filename
 * @letters: the number of letters 
 *
 * Return: actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	char *str = malloc(letters);
	long unsigned int r;
	long unsigned int w;

	if (str == NULL)
		return (0);
	if (filename == NULL)
	{
		free(str);
		return (0);
	}
	k = open(filename,O_RDONLY);
	if (k == -1)
	{
		free(str);
		return (0);
	}
	r = read(k,str,letters);
	if (r != letters)
	{
		free(str);
		close(k);
		return (0);
	}
	w = write(STDOUT_FILENO,str,r);
	if (w != r)
	{
		free(str);
		close(k);
		return (0);
	}
	free(str);
	close(k);
	return (r);
}
