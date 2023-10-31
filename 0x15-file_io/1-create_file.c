#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: -1 on falure or 1 on success
*/

int create_file(const char *filename, char *text_content)
{
	int newfile;
	int count;
	ssize_t checkw;

	if (text_content == NULL)
		text_content = "";
	newfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (newfile == -1)
		return (-1);
	for (count = 0; text_content[count] != '\0';)
	{
		count++;
	}
	checkw = write(newfile, text_content, count);
	if (checkw == -1)
		return (-1);
	close(newfile);
	return (1);
}
