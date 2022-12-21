#include <stdio.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description:
 *
 * Return: 0
 */
int main(void)
{
	int count = 0;
	long a = 0;
	long b = 1;
	long sum = 0;

	while (count <= 49)
	{
		sum = a + b;
		if (count == 49)
		{
			printf("%ld\n", sum);
			break;
		}
		printf("%ld, ", sum);
		a = b;
		b = sum;
		count++;
	}

	return (0);
}
