#include "main.h"
/**
 * create_file - creates file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success 0 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int k;
	int n;
	int length;
	if (text_content == NULL)
		text_content = "";
	for (length = 0; text_content[length] != '\0'; length++)
	{
	}
	if (filename == NULL)
		return (-1);
	k = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (k == -1)
	{
		free(text_content);
		return (-1);
	}
	n = write(k, text_content, length);
	if (n == -1)
	{
		free(text_content);
		close(k);
		return (-1);
	}
	close(k);
	return (1);
}
