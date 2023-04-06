#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int gutema = 1;

	
	return ((int) (((char *)&gutema)[0]));
}
