#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads texfile and prints it to POSIX stdout
 * @letters: number of letters to be read
 * @filename: pointer to a file with text
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int letters_read;
	int letters_written;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	if (buf == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);

