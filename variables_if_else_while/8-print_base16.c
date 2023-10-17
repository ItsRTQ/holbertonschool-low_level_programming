#include <stdio.h>
/**
 * main - starts the function
 * Description - prints hex numbers
 * Return: 0 if main finished correctly
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 102; ch++)
	{
		if (ch == 58)
		{
			ch = 96;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
