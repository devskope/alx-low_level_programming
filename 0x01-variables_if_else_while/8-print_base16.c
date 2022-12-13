#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print lowercase base 16 digits with putchar
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii '0' 48 */
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i == 58)
			i = 97;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
