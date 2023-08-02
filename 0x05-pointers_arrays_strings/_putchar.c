<<<<<<< HEAD
#include <stdio.h>
/**
 * main - Entry point of the program that print what is in function puts.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	printf("_putchar\n");

	return (0);

=======
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> ae85c8191d2cf97cc69d3d5120e8840218d4735b
}
