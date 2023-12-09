#include "main.h"
/**
* append_text_to_file - apends to the end of a file
* @filename: recive a value
* @text_content: this will be appended to the file
*
* Return: bsaed on if the function finish propertly or not
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t checks;
	size_t size;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		size = strlen(text_content);
	else
		size = 0;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	checks = write(file, text_content, size);
	if (checks == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
