#include "main.h"

/**
 * _isalpha - Test character case
 * @c: character to test
 *
 * Description: Checks for alphabetic character.
 *
 * Return: 1 if alphabet. 0 otherwise
 */
int _isalpha(int c)
{

	/* test c in 'A-Za-z' */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
