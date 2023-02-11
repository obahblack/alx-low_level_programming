#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
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
	
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1 || bytes_written != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	
	close(fd);
	return (1);
}
