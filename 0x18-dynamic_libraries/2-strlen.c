#include "main.h"

/**
 * _strlen - function calculate the rength of a string
 *
 * @s: a string
 *
 * Return: Return length of a string as integer
 */

int _strlen(char *s)
{

	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
