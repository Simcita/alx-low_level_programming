#include <stdio.h>

/**
 * main - Entry point of the program that print what is in function printf.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
