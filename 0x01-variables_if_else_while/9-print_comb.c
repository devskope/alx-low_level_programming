#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print combination of single digits with putchar
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii '0' 48 */
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
