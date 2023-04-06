#include "main.h"

/**
 * You are not allowed to use the % or / operators
 * flip to get from one number to another.
 * @n: number.
 * @m: another.
 * Return: number of bit to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int pichu = 0;
	int len = (sizeof(number) * 8);

	while (len >= 0)
	{
		if (number & 1)
			pichu++;
		number= number >> 1;
		len--;
	}
	return (pichu);
}
