#include "main.h"

/**
 * iprint_to_98 - function prints number between n and 98
 *
 * @n: integer number
 * Description: the function prints all number in the range
 *
 * Return: Retuns nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
