#include "main.h"

/**
 * set_bit - where index is the index, starting from 0 of the bit you want to se
 * @n: number.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | aux;
	return (1);
}
