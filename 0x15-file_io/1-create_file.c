#include "main.h"

/**
 * create_file - entry point
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
		       ;
	}	
	wr = write(op, text_content, count);
	if (wr == -1)
	{
		return (-1);
	}
	close (op);
	return (-1);
}
