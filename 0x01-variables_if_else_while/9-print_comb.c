#include <stdio.h>
/**
 * main - Entry point of the program that print what is in function puts.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int a;

	for (a = 48 ; a < 58 ; a++)
	{
		putchar(a);
		if (a == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
