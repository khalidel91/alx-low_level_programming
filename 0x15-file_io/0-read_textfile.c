#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIC stdout
 * @filename: pointer to the text file
 * @letters: number of printed letters
 * Return: number of printed letters and 0 else
 */

ssize_t read_textfile(const char *filename, size_t letters)
	{
		FILE *f = fopen(filename, "r");
		char *buffer = malloc(sizeof(char) * (letters + 1));
		ssize_t c_read = fread(buffer, sizeof(char), letters, txt);
		ssize_t c_write = fwrite(buffer, sizeof(char), c_read, stdout);
		if (filename == NULL)
			return (0);
		if (txt == NULL)
			return (0);
		if (buffer == NULL)
		{
			fclose(f);
			return (0);
		}
		if (c_read <= 0)
		{
			free(buffer);
			fclose(txt);
			return (0);
		}
		if (c_write != c_read)
		{
			free(buffer);
			fclose(txt);
			return (0);
		}
		free(buffer);
		fclose(txt);
		return (c_read);
	}
