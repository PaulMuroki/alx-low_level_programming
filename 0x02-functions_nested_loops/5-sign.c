#include "main.h"
/**
 * print_sign - function to ccheck if a number is positive or negative
 *
 * @n: the value of the number
 * Return: 1 if positive, 0 is zero or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
