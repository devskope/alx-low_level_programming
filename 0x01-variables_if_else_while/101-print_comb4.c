#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii '0' 48 */
	int i;
	int j;
	int k;

	/* outer loop for first digit from 0 */
	for (i = 48; i <= 55; i++)
	{
		/* inner loop for second digit */
		for (j = i + 1; j <= 56; j++)
		{
			/* inner loop for second digit */
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
