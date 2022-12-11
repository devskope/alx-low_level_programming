#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 * @void: no parameter
 *
 * Description: determine the sign of a randomly generated number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (6 > lastDigit && 0 != lastDigit)
	{
		printf("less than 6 and not 0\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}

	return (0);
}
