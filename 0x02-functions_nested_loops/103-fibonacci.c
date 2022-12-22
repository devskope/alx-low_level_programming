#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: prints the sum of the even-valued fibonacci terms < 4000000,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int a, b, sum;

	a = sum = 0;
	b = 1;
	/* is last term out of range? */
	while (b < 4000000)
	{
		int term = a + b;

		if (term % 2 == 0)
			sum += term;
		a = b;
		b = term;
	}
	printf("%d\n", sum);
	return (0);
}
