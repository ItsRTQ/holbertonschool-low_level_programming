#include <stdio.h>
/**
 * main - starts the program
 * Descrition - prints the abc's
 * Return: 0 if the fuction finish correctly
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch < 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
