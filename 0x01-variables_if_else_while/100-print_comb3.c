#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii '0' 48 */
	int i;
	int j;

	/* outer loop for first digit from 0 */
	for (i = 48; i <= 56; i++)
	{
		/* inner loop for second digit */
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (!(i == 56 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
