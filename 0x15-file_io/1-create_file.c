#include "main.h"

/**
 * 
 * 
*/

int create_file(const char *filename, char *text_content)
{
    int newfile;
    int count;
    ssize_t checkw;

    newfile = open(filename, O_CREAT | O_WRONLY);
    if (newfile == -1)
        return (-1);
    for(count = 0; text_content[count] != '\0';)
    {
         count++;
    }
    checkw = write(newfile, text_content, count);
    if (checkw == -1)
        return (-1);
    close(newfile);
    return (1);
    
}
