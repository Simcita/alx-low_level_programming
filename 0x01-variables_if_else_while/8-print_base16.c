#include <stdio.h>
/**
 * main - Entry point of the program that print what is in function puts.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int a;
	int b;

	for (a = 48 ; a < 58 ; a++)
	{
		putchar(a);
	}
	for (b = 97 ; b < 103 ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
