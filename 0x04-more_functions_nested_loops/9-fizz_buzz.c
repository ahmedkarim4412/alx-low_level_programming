#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("Fizz");
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);

}
