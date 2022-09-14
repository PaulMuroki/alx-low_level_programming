#include"main.h"

/**
 * main - print putchar
 * return: return 0 for success
 */

void main(void)
{
	char string[] = "_putchar";
	int len = strlen(string);
	int counter = 0;

	for (counter < len; counter++;)
		_putchar(string[counter]);
	_putchar('\n');
}
