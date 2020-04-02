#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 *create_file - create a file.
 *@filename: is a file.
 *@text_content: is string.
 *Return: 0 is ok, -1 is wrong.
 */
int create_file(const char *filename, char *text_content)
{
	int vret, fd1;

	// si text_content is null create a void file.
	if (text_content == NULL)
		text_content = "";
	fd1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd1 < 0)
	{
		return (-1);
	}

	vret = write(fd1, text_content, strlen(text_content));
	if (vret < 0)
	{
		return (-1);
	}
	close(fd1);
	return (1);
}
