#include <stdio.h>

/**
 * main - Entry point of the function
 *
 * return: It will return zero when successful
 */
int main(void)
{
	printf("Size of an int %zu byte(s)", sizeof(int));
	printf("size of a char %zu byte(s)", sizeof(char));
	printf("size of a float %zu byte(2)", sizeof(float));
	printf("size of a long int %zu bytes", sizeof(long int));
	return (0);
}

