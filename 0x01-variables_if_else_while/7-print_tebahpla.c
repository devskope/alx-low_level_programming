#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print lowercase alphabet in reverse with putchar
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii 'z' 122 */
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
