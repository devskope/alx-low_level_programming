#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: print alphabet in lovercase then uppercase with putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	/* initialize i to ascii 'a' 97 */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	/* set i to ascii 'A' 65 */
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
