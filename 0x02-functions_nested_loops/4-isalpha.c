#include "main.h"

/**
 * _isalpha - starting point of a function
 *
 * @c: The values character
 *
 * Return: Return 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
