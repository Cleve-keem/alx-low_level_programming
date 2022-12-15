#include "main.h"

/**
 * main - prints 1-100, replacing multiples of 3 with Fizz and multiples of
 * 5 with Buzz, and multiples of both with FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			putchar("Fizz");
		if (i % 5 == 0)
			putchar("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	putchar('\n');
	return (0);
}
