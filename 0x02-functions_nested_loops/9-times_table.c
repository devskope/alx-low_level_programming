#include <stdio.h>

/**
 * times_table - print 9 times table starting at 0
 * @void: no parameter
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j == 0 || (j == 0 && i == 0))
			{
				printf("%d", product);
			}
			else if (!product || product < 10)
				printf(",  %d", product);
			else
				printf(", %d", product);
		}
		printf("\n");
	}
}
