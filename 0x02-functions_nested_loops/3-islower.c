#include "main.h"

/**
 * _islower - Test character case
 * @c: character to test
 *
 * Description: Checks for lowercase character.
 *
 * Return: 1 if lovercase. 0 otherwise
 */
int _islower(int c)
{

	/* test i in 'a' - 'z' */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
