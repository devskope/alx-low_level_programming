#include "main.h"

/* hoist ticks */
void tick(int *k, int *l);

/**
 * jack_bauer - Print the hours and minutes of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar(10);
		}
		h++;
	}
}
