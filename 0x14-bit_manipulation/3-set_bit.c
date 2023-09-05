#include "main.h"

/**
 * set_bit -> Sets the value of bit at given index to 1
 *
 * @n: Input Number
 * @index: Input Index
 *
 * Return: Depend Condition
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 63)
		return (-1);
	num <<= index;
	*n = *n | num;
	return (1);
}
