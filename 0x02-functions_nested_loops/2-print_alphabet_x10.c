#iclude"main"

/**
 * print_alphabet_x10 - function prints the alphabet 10 times
 *
 * Return 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = "a"; c <= "z"; c++)
		{
			_putchar(c);
i		}
		_putchar('\n');
	}
}
