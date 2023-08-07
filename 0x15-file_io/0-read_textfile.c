#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file to read
 * @letters: number of bytes to read
 *
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	int fdesc;
	char buffer[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);

	bytes = read(fdesc, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fdesc);
	return (bytes);
}
