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
	int vret, fd1, fd2, leidos, cl1, cl2;
	char stringrec[1024];

	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	fd2 = open(file_from, O_RDONLY);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	leidos = read(fd2, stringrec, 1024);
	if (leidos < 0)
	{

		exit(98);
	}
	vret = write(fd1, stringrec, leidos);
	if (vret < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	cl1 = close(fd1);
	if (cl1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", cl1);
		exit(100);
	}
	cl2 = close(fd2);
	if (cl1 < 0 || cl2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", cl2);
		exit(100);
	}
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
		dprintf(STDERR_FILENO, "Usage: %s %s\n", av[1], av[2]);
		exit(97);
	}

	create_file(av[2], av[1]);

	return (0);
}
