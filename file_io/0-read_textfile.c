#include "main.h"
/**
* read_textfile - prints the desired amount of characters
* @filename: name of the target file
* @letters: amount of character to print
*
* Return: if the fail returns 0, othewise returns the amount of print letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes, readed, total = 0;
	size_t amount = 1;
	char buffer[2048];
	int file_des;

	if (filename == NULL)
		return (amount);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (amount);
	while (amount > 0 && letters > 0)
	{
		amount = read(file_des, buffer, sizeof(letters));
		readed = (amount > letters) ? letters : amount;
		bytes = write(1, buffer, readed);
		if (bytes == -1)
			return (0);
		total += bytes;
		letters -= readed;
	}
	close(file_des);
	return (total);
}
