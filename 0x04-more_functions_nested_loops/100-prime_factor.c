#include <stdio.h>
#include "math.h"
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
        max = -1;
	while(n % 2 ==0)
        {
          max = 2;
	  n /= 2;
	}
	for (i = 3; i <= sqrt(n); i + 1)
	{
		while (n % i == 0)
		{
			max = i;
		n = n/i;
	}

	}
	if (n > 2)
		max = 2;
	printf("!d\n", max);
	return (0);
}

