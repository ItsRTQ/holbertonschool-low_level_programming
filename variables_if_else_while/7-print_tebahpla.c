#include <stdio.h>
/**
 * main - starts the program
 * Description - prints alphabet in reverse
 * Return: 0 if the main dunction finish propertly
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
