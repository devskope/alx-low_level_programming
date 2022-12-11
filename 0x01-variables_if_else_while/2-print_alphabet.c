#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print lowercase alphabet with putchar
 *
 * Return: 0
 */
int main(void)
{
	/* initialize i to ascii 'a' 97 */
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
