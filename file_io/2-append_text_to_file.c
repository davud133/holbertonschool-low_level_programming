#include "main.h"
/**
 * append_text_to_file - appends text toe nd of a file
 * @filename: name of file
 * @text_content: text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t length;
	int k;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_WRONLY | O_APPEND);
	if (k == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	for (length = 0; text_content[length] != '\0'; length++)
	{
	}
	w = write(k, text_content, length);
	if (w == -1)
		return (-1);
	return (1);
}

