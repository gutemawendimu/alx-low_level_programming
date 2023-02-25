#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int num;

	num = 612852475143;

	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}

	}
	printf("%li\n", num);
	return (0);
}
