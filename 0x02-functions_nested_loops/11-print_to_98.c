#include <stdio.h>

/**
 * print_to_98 - Print all numbers from n to 98
 * @n: starting integer
 *
 * Description:
 *
 * Return: 0
 */
void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
