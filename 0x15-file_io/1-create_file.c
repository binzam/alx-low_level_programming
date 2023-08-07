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
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: text to write
 *
 * Return: integer 1 (success), 0 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fdesc == -1)
		return (-1);
	if (len)
		bytes = write(fdesc, text_content, len);
	close(fdesc);
	if (bytes == len)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
