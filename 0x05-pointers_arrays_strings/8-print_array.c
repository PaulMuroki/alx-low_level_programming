#include "main.h"
#include <string.h>
/**
 * print_array - function prints n elements of an array
 *
 * @a: first value
 *
 * @n: second value
 *
 * Description: prints n elements of an array of integer
 *
 * Return: Return nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
		printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}
