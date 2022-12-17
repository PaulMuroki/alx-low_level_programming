#include "main.h"
/**
 * _islower - function to check lowercase characters
 * @c: is the value of the character
 * Return: 1 if True esse 0 if False
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
