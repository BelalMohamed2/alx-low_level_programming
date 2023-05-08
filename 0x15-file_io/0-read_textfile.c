#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to POSIX standard output
 * @filename: the file name of the input file
 * @letters: is the number of letters it should read and print
 * Return: eturns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *output;
	ssize_t readded_len, written_len;

	if (filename == NULL)
		return (0);
	output = malloc(sizeof(char) * letters);
	if (!output)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(output);
		return (0);
	}
	readded_len = read(fd, output, letters);
	if (readded_len == -1)
	{
		free(output);
		return (0);
	}
	written_len = write(STDOUT_FILENO, output, readded_len);
	if (written_len == -1)
	{
		free(output);
		return (0);
	}
	return (readded_len);
}
