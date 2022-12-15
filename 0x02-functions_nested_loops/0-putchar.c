#include "main.h"

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
	char text[] = "_putchar\n";
	int i;

	for (i = 0; text[i]; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
