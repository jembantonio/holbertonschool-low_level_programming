#include "holberton.h"

/**
* read_textfile - a function that reads a text file and prints it
* to the POSIX standard output
* @filename: a pointer to the filename to read
* @letters: the number of letters it should read and print
*
* Return: number of letters it could read and print
* 0 if file cannot be opened, read, or NULL, if write fails
* return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, wr;
	ssize_t bytes;
	char *buffer;

	/* allocate letters */
	buffer = malloc(sizeof(char) * letters);

	/* check if malloc fails */
	if (!buffer)
		return (0);

	if (filename)
	{
		/* opens file w/ R+W */
		fd = open(filename, O_RDONLY);
		/* check error during open */
		if (fd == -1)
			return (0);

		/* reads text into buffer from file */
		bytes = read(fd, buffer, letters);

		/* write to stdout from buffer */
		wr = write(STDOUT_FILENO, buffer, bytes);


		close(fd);
		free(buffer);
		return (wr);
	}

	return (0);
}
