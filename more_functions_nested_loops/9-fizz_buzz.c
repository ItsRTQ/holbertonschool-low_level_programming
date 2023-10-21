#include <stdio.h>
/**
* main - it starts the program
* Description - prints fizz, buzz, or fizzbuzz depending on the number
* Return: void, doesnt return
*/
void main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}
	putchar('\n');
}
