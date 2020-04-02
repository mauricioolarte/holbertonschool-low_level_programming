#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 *append_text_to_file - create a file.
 *@filename: is a file.
 *@text_content: is string.
 *Return: 0 is ok, -1 is wrong.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int vret, fd1, vwrite;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_RDWR | O_APPEND, 0664);

	if (fd1 < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	vwrite = strlen(text_content);
	vret = write(fd1, text_content, vwrite);
	if (vret < 0)
	{
		return (-1);
	}
	close(fd1);
	return (1);
}
