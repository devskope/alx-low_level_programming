#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a, aDiv, aMod, b, bDiv, bMod, c, cDiv, cMod, count;

	a = 0;
	b = 1;
	c = a + b;

	for (count = 1; count < 89; count++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}

	bDiv = b / 1000000000;
	bMod = b % 1000000000;
	cDiv = c / 1000000000;
	cMod = c % 1000000000;

	for (count = 89; count < 98; count++)
	{
		printf("%lu%lu, ", cDiv, cMod);
		aDiv = bDiv;
		aMod = bMod;
		bDiv = cDiv;
		bMod = cMod;
		cDiv = aDiv + bDiv + ((aMod + bMod) / 1000000000);
		cMod = (aMod + bMod) % 1000000000;
	}

	printf("%lu%lu\n", cDiv, cMod);

	return (0);
}
