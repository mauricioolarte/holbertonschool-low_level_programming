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
	int vret, fd1;

	if (filename == NULL)
		return (-1);
/* Creación y apertura del fichero */
	fd1 = open(filename, O_WRONLY | O_APPEND, 0664);
/* Comprobación de errores */
	if (fd1 < 0)
	{
		perror("Error al abrir fichero:");
		return (-1);
	}
	if (text_content == NULL && fd1 == -1)
		return (-1);
	else
		return (1);
/* Escritura de la cadena */
	vret = write(fd1, text_content, strlen(text_content));
	if (vret < 0)
	{
		perror("Error al escriber fichero:");
		return (-1);
	}
	close(fd1);
	return (1);
}
