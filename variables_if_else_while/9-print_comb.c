#include <stdio.h>
/**
 * main - starts program
 * Description - prints numbers 0 to 9 in order
 * Return - 0 if main finished
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
		}
	}
	putchar(36);
	putchar('\n');
	return (0);
}
