#include <stdio.h>

/**
 * print_times_table - print n times table starting at 0
 * @n: stop table at  n**2
 *
 */
void print_times_table(int n)

{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j == 0 || (j == 0 && i == 0))
			{
				printf("%d", product);
			}
			else if (!product || product < 10)
				printf(",   %d", product);
			else if (!product || product < 100)
				printf(",  %d", product);
			else
				printf(", %d", product);
		}
		printf("\n");
	}
}
