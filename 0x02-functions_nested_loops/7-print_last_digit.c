#include "main.h"

/**
 * print_last_digit - starting point of a function
 *
 * @n: The values character
 *
 * Description: prints the last digit
 *
 * Return: Return the last digit
 */

int print_last_digit(int n)
{
	int res;

	res = n % 10;
	_putchar(res + '0');
	return res;
}

