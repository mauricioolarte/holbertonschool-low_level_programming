#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
/**
 *create_file - create a file.
 *@file_to: is a file.
 *@file_from: is string.
 *Return: 0 is ok, -1 is wrong.
 */
int create_file(const char *file_to, char *file_from)
{
	int vret, fd1, fd2, leidos;
	char stringrec[1024];

/* Creación y apertura del fichero */
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

/* Comprobación de errores */
	if (fd1 < 0)
	{
		perror("Error: Can\'t write to file_to\n");
		exit(99);
	}
/* leyendo file_from*/
	fd2 = open(file_from, O_RDONLY);

/* Comprobación de errores */
	if (fd2 < 0)
	{
		perror("Error: Can\'t read from file file_from\n");
		exit(99);
	}
	leidos = read(fd2, stringrec, 1024);
	if (leidos < 0)
	{
		perror("Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

/* Escritura de la cadena */
	vret = write(fd1, stringrec, leidos);
	if (vret < 0)
	{
		perror("Error: Can't write to file_from");
		exit(99);
	}
	close(fd1);
	close(fd2);
	return (1);
}




/**
 * main - check the code for Holberton School students.
 *@ac: number of arguments.
 *@av: arguments.
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(2, "Usage: %s %s\n", av[1], av[2]);
		exit(97);
	}

	if (av[0][2] != 'c' || av[0][3] != 'p' || av[0][4] != '\0')
		exit(0);
	create_file(av[2], av[1]);

	return (0);
}
