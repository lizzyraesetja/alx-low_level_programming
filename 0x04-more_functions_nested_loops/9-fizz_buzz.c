#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number from 1 to 100
 * 3 multiplers print Fizz intead of a number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz instead of number
 * Return: Always 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s ", f);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", i);
		}
		putchar(i == 100 ? '\n'  : ' ');
	}
	return (0);
}
