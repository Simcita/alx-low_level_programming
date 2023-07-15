#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program that print what is in function puts.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0", n, ld);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
