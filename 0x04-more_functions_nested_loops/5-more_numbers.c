#include "main.h"

/**
 * more_numbers - function prints 10 times the number
 *
 * Description: the function prints 10 times 0 to 14
 *
 * Return: Retuns nothing
 */

void more_numbers(void)
{
	int i, num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 != 0)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
