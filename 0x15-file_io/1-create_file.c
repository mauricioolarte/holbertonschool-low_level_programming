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

	if (filename[0] == 'N' && filename[1] == 'U' &&
		filename[2] == 'L' && filename[3] == 'L')
	{
		return (-1);
	}
/* Creación y apertura del fichero */
	fd1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

/* Comprobación de errores */
	if (fd1 < 0)
	{
		perror("Error al abrir fichero:");
		exit(-1);
	}

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
