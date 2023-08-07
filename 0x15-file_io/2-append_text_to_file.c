#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: The string to append to the end of the file.
 *
 * Return: 1 (success), 0 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
	{
		bytes = write(fd, text_content, len);
		if (bytes ==len)
		{
			close(fd);
			return (1);
		}
	}
	close(fd);
	return (-1);
}
