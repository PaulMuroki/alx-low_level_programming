#include "main.h"
#include <string.h>
/**
 * puts_half - function prints half of a string
 *
 * @str: a string
 *
 * Description: prints half of a string
 *
 * Return: Return nothing
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
