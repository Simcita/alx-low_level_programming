#include <stdio.h>

/**
 * main - Entry point of the program that print what is in function printf.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int n;

	for  (n = 0 ; n < 10 ; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
