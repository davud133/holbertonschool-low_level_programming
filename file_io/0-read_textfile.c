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
	ssize_t n;
	if (filename == NULL)
		return (0);
	int k = open(filename,O_RDONLY);
	if (k == -1)
		return (0);
	char *str;
	int r = read(k,str,letters);
	if (r != letters)
		return (0);
	int w = write(k,str,r);
	if (w != r)
		return (0);
	return (r);
}
