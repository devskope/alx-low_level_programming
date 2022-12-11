#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print lowercase alphabet except `e, q` with putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	/* initialize i to ascii 'a' 97 */
	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
