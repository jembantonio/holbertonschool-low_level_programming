#include "holberton.h"

/**
* create_file - a function that creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len, content;

	/* strlen function */
	len = 0;

	while (text_content[len])
		len++;


	/* error checks */
	if (!filename)
		return (-1);

	/* creates file w/ R+W for U */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write the content to a file */
	content = write(fd, text_content, len);
	if (content == -1)
		return (-1);

	close(fd);
	return (1);
}
