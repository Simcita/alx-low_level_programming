#include <stdio.h>

/**
 * main - Entry point of the program that print what is in function printf.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	for (int n = 0 ; n < 10 ; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
