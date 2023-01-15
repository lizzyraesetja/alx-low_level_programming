#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 * Return: Nothing!
 */

int main(void)
{
	int y = 0;
	long int j = 1, k = 2;

	while (y < 50)
	{
		if (y == 0)
		{
			printf("%ld\n", j);
		}
		else if (y == 1)
		{
			printf(", %ld\n", k);
		}
		else
		{
			k += j;
			j = k - j;
			printf(", %ld\n", k);
		}
		y++;
	}
	printf('\n');
	return (0);
}
