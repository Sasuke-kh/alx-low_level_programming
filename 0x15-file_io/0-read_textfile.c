#include "main.h"

/**
 * read_textfile - print file text
 * @filename: file to print
 * @letters: number of letters to print
 * Return: 0 on failure or num of letters on success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t refile;
	char *c;
	ssize_t checkw;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		free(c);
		close(file);
		return (0);
	}
	refile = read(file, c, letters);
	if (refile == -1)
	{
		free(c);
		close(file);
		return (0);
	}
	checkw = write(1, c, refile);
	if (checkw == -1 || checkw != refile)
		return (0);
	free(c);
	close(file);
	return (refile);
}
