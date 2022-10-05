#include "main.h"

/**
 * _isdigit - function checks for a digit
 *
 * @c: Value to be checked
 *
 * Description: the function checks for a digit
 *
 * Return: Retuns 1 if its digit and 0 if its not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
