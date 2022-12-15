#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet (lowercase)
 * @void: no parameter
 *
 * Description: Print alphabet (lowercase) + '\n' 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int c;

	for (; i <= 10;)
	{
		/* set c to 'a' */
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar(10);
		i++;
	}
}
