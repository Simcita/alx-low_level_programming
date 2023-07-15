#include <stdio.h>

/**
 * main - Entry point of the program that print what is in function printf.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}

