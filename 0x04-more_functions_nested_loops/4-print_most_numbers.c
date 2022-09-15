#include "main.h"

/**
 * print_most_numbers - function prints 0-9 except 2 and 4
 *
 * Description: the function will print digit exept 2 and 4
 *
 * Return: Retuns nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
