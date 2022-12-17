#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: a string
 *
 * Description: prints a string
 *
 * Return: Return nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
