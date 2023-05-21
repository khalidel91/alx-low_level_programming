#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIC stdout
 * @filename: pointer to the text file
 * @letters: number of printed letters
 * Return: number of printed letters and 0 else
 */

ssize_t read_textfile(const char *filename, size_t letters)
	
	{
	ssize_t f, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1 || f == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f);

	return (w);
}
