#include "main.h"
void errorCall(char *filename);
/**
* main - copies one file to another file
* @argc: amount of arguments
* @argv: argument vector
*
* Return: void, doesnt return
*/
int main(int argc, char *argv[])
{
	int output, input;
	ssize_t checks, safeguard;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	output = open(argv[1], O_RDONLY);/*opens the file to copy from*/
	if (output == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	input = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/*opens files copy*/
	if (input == -1)
		errorCall(argv[2]);
	while ((checks = read(output, buffer, sizeof(buffer))) > 0)
	{
		safeguard = write(input, buffer, checks);
		if (safeguard == -1)
			errorCall(argv[2]);
	}
	if (close(input) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", input);
		exit(100);
	}
	if (close(output) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", output);
		exit(100);
	}
	return (0);
}
/**
* errorCall - calls when error 99 occures
* @filename: recive the name of the file the error occured
*
* Return: void, doesnt return
*/
void errorCall(char *filename)
{
	dprintf(2, "Error: Can't write to %s\n", filename);
	exit(99);
}
