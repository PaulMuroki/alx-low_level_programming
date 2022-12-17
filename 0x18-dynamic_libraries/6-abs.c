#include "main.h"
/**
 * _abs - the function calculates the absolute value of a number
 * @n: the value of the number
 * Description: converts the valued to absolute
 * Return: returns the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = 0 - n;
	}
	return (n);
}
