#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to be created
 * @text_content: is the string to be written to the file
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content);
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1 || bytes_written != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
