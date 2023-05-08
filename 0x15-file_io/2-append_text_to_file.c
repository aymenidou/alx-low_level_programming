#include "main.h"

/**
 * append_text_to_file - entry point
 * @filename: filename
 * @text_content: text to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_APPEND | O_WRONLY);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (count = 0; text_content[count];)
			count ++;
		wr = write(op, text_content, count);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(op);
	return (1);
}
