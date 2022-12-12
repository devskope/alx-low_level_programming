#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
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
	}
	putchar(10);
	return (0);
}
