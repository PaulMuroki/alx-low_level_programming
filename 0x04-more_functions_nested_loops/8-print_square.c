#include "main.h"

/**
 * print_square - function draws a square
 *
 * @size: a value to be entered
 *
 * Description: the function will print a square
 *
 * Return: Retuns nothing
 */

void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
