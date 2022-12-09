#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * write: print the letters
 *
 * Return: to show if there is error
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
