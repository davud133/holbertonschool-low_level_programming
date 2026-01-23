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
	char *str = "";
	long unsigned int r;
	long unsigned int w;
	if (filename == NULL)
		return (0);
	k = open(filename,O_RDONLY);
	if (k == -1)
		return (0);
	r = read(k,str,letters);
	if (r != letters)
		return (0);
	w = write(k,str,r);
	if (w != r)
		return (0);
	return (r);
}
