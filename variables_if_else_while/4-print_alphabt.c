#include <stdio.h>
/**
 * main - starts the program
 * Description - prints the abc, without q or e
 * Return: 0 if the fuction finish correctly
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
