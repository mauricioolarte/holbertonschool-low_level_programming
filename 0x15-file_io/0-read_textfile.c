#include<stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1, leidos, escritos;
	char *stringrec;

	stringrec = (char *)(malloc(sizeof(char) * letters));
	if (stringrec == NULL)
	{
		return(0);
	}

	fd1 = open(filename, O_RDONLY);
	if (fd1 < 0)
	{
		free(stringrec);
		return (0);
	}
	leidos = read(fd1, stringrec, letters);
	if (leidos < 0)
	{
		free(stringrec);
		return (0);
	}
	escritos = write(STDOUT_FILENO, stringrec, leidos);
	if (escritos < 0)
	{
		free(stringrec);
		return (0);
	}
	close(fd1);
	free(stringrec);
	return (escritos);

}
