#include "main.h"
/**
 * print_sign - function to ccheck iif a number is positive or negative
 * @n the value of the number
 * return 1 if positive, 0 is zero or -1 if negative
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
		return 0
	}
}
