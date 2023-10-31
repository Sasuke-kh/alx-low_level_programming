#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to append at the end
 * Return: -1 on failure 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int counter;
	ssize_t checkw;

	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	for (counter = 0; text_content[counter] != '\0';)
		counter++;
	checkw = write(file, text_content, counter);
	if (checkw == -1)
		return (-1);
	close(file);
	return (1);
}
