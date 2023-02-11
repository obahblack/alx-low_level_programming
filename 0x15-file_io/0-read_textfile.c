#include "main.h"
/**
 * read_textfile - reads textfile and prints content
 * @filename: name of file to retrieve content
 * @letters: number of characters to be printed
 * Return: number of written characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filenamme, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	char *buf = malloc(letters);

	if (!buf)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILEEND, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (bytes_written);
}
