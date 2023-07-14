#include <unistd.h>

/**
 * main - Entry point of the program that print what is in function puts.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
