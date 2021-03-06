#include "main.h"

/**
 * read_textfile - read a text file
 *
 * @filename: the name of the file
 * @letters: the number of characters to read
 *
 * Return: the number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fptr = malloc(letters);
	int ofile, rfile, wfile;

	if (!fptr)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	ofile = open(filename, O_RDONLY);
	if (ofile == -1)
	{
		free(fptr);
		return (0);
	}
	rfile = read(ofile, fptr, letters);
	if (rfile == -1)
	{
		free(fptr);
		return (0);
	}
	wfile = write(STDOUT_FILENO, fptr, strlen(fptr));
	close(ofile);
	free(fptr);
	if (wfile == -1)
	{
		return (0);
	}
	return (wfile);
}
