#include "main.h"

/**
 * print_binary - Print binary representation of input number
 *
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int i, p = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (p == 0)
		_putchar('0');
}
