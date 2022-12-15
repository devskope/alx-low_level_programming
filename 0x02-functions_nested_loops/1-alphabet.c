#include "main.h"

/**
 * print_alphabet - Print alphabet (lowercase)
 * @void: no parameter
 *
 * Description: Print alphabet (lowercase)
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	/* set i to 'a' */
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
