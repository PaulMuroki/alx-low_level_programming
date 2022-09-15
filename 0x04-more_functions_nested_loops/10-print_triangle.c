#include "main.h"

/**
 * print_triangle - function draws a triangle
 *
 * @size: The size of the triangle
 *
 * Description: the function will print a triangle
 *
 * Return: Retuns nothing
 */

void print_triangle(int size)
{
	int rows, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size - rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
