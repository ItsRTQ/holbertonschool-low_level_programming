#include "main.h"
/**
* create_file - creates a file with desire description
* @filename: recive a value
* @text_content: recive description
*
* Return: based on if function fails or not
*/
int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t checks;
	size_t size;

	if (text_content == NULL || filename == NULL)
		return (-1);
	size = strlen(text_content);
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	checks = write(file_des, text_content, size);
	if (checks == -1)
	{
		close(file_des);
		return (-1);
	}
	close(file_des);
	return (1);
}
