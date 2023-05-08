#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the text to be add or apped
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, y;
	int count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		y = write(fd, text_content, count);
		if (y != count)
			return (-1);
	}
	close(fd);
	return (1);
}
