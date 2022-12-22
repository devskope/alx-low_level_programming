#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: prints the sum of the first 98 fibonacci terms.
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long count;

	for (count = 1; count <= 98; count++)
	{
		unsigned long term = a + b;

		if (count == 98)
			printf("%lu\n", term);
		else
		{
			printf("%lu, ", term);
			a = b;
			b = term;
		}
	}

	return (0);
}
