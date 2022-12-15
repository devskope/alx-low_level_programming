#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number input
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
